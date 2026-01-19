#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// ══════════════════════════════════════════════════════════════
//                    КРОСС-ПЛАТФОРМЕННОСТЬ
// ══════════════════════════════════════════════════════════════

#ifdef _WIN32
    #include <windows.h>
    #define INIT_CONSOLE() do { \
        SetConsoleOutputCP(65001); \
        SetConsoleCP(65001); \
    } while(0)
#else
    #include <locale.h>
    #define INIT_CONSOLE() setlocale(LC_ALL, "")
#endif

#include "src/alphabet.h"

// ══════════════════════════════════════════════════════════════
//                         ФУНКЦИИ
// ══════════════════════════════════════════════════════════════

/**
 * Поиск символа в таблице
 */
const BannerChar* findChar(char c) {
    char upper = toupper((unsigned char)c);
    
    for (int i = 0; ALL_CHARS[i] != NULL; i++) {
        char tableChar = ALL_CHARS[i]->symbol;
        // Сравниваем с учетом регистра для букв
        if (tableChar == upper || tableChar == c) {
            return ALL_CHARS[i];
        }
    }
    return &CHAR_SPACE; // Неизвестный символ -> пробел
}

/**
 * Вычисление ширины UTF-8 строки в символах (не байтах)
 */
int utf8_strlen(const char* str) {
    int len = 0;
    while (*str) {
        if ((*str & 0xC0) != 0x80) len++;
        str++;
    }
    return len;
}

/**
 * Печать баннера
 */
void printBanner(const char* text, int showBorder, const char* prefix) {
    int len = strlen(text);
    
    // Вычисляем общую ширину
    int totalWidth = 0;
    for (int i = 0; i < len; i++) {
        const BannerChar* ch = findChar(text[i]);
        if (ch) {
            totalWidth += utf8_strlen(ch->rows[0]);
        }
    }
    
    // Верхняя рамка
    if (showBorder) {
        printf("%s", prefix);
        for (int i = 0; i < totalWidth + 4; i++) printf("═");
        printf("\n");
    }
    
    // Печать строк
    for (int row = 0; row < CHAR_HEIGHT; row++) {
        printf("%s   ", prefix);
        for (int i = 0; i < len; i++) {
            const BannerChar* ch = findChar(text[i]);
            if (ch) {
                printf("%s", ch->rows[row]);
            }
        }
        printf("\n");
    }
    
    // Нижняя рамка
    if (showBorder) {
        printf("%s", prefix);
        for (int i = 0; i < totalWidth + 4; i++) printf("═");
        printf("\n");
    }
}

/**
 * Печать справки
 */
void printHelp(const char* programName) {
    printf("Usage: %s [option] [text]\n\n", programName);
    printf("Optins:\n");
    printf("  -h, --help      Show help\n");
    printf("  -n, --no-border Without borders\n");
    printf("  -p, --prefix    Prefix for all line (Default \"// \")\n");
    printf("  -l, --list      Show all supported symbols\n");
    printf("\nПримеры:\n");
    printf("  %s HELLO\n", programName);
    printf("  %s -n \"Hello World\"\n", programName);
    printf("  %s -p \"# \" TEST\n", programName);
}

/**
 * Показать все доступные символы
 */
void listChars(void) {
    printf("Supported Symbols:\n");
    printf("  Latters:    A-Z (регистронезависимо)\n");
    printf("  Digitals:    0-9\n");
    printf("  Symbols:  ");
    
    for (int i = 0; ALL_CHARS[i] != NULL; i++) {
        char c = ALL_CHARS[i]->symbol;
        if (!isalnum((unsigned char)c) && c != ' ') {
            printf("%c ", c);
        }
    }
    printf("\n");
}

// ══════════════════════════════════════════════════════════════
//                           MAIN
// ══════════════════════════════════════════════════════════════

int main(int argc, char* argv[]) {
    INIT_CONSOLE();
    
    int showBorder = 1;
    const char* prefix = "// ";
    const char* text = NULL;
    
    // Парсинг аргументов
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printHelp(argv[0]);
            return 0;
        }
        else if (strcmp(argv[i], "-l") == 0 || strcmp(argv[i], "--list") == 0) {
            listChars();
            return 0;
        }
        else if (strcmp(argv[i], "-n") == 0 || strcmp(argv[i], "--no-border") == 0) {
            showBorder = 0;
        }
        else if (strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--prefix") == 0) {
            if (i + 1 < argc) {
                prefix = argv[++i];
            }
        }
        else if (argv[i][0] != '-') {
            text = argv[i];
        }
    }
    
    // Интерактивный ввод если текст не указан
    char inputBuffer[512];
    if (text == NULL) {
        printf("╔════════════════════════════════════════╗\n");
        printf("║     ASCII BANNER GENERATOR v1.0        ║\n");
        printf("╚════════════════════════════════════════╝\n\n");
        printf("Your text: ");
        fflush(stdout);
        
        if (fgets(inputBuffer, sizeof(inputBuffer), stdin) == NULL) {
            fprintf(stderr, "Error\n");
            return 1;
        }
        
        // Убираем \n
        inputBuffer[strcspn(inputBuffer, "\n")] = 0;
        text = inputBuffer;
    }
    
    if (strlen(text) == 0) {
        fprintf(stderr, "Line will not be empty!\n");
        return 1;
    }
    
    printf("\n");
    printBanner(text, showBorder, prefix);
    
    return 0;
}
