#ifndef ALPHABET_H
#define ALPHABET_H

#define CHAR_HEIGHT 6
#define MAX_CHAR_WIDTH 12

typedef struct {
    char symbol;
    const char* rows[CHAR_HEIGHT];
} BannerChar;

// ══════════════════════════════════════════════════════════════
//                         АЛФАВИТ A-Z
// ══════════════════════════════════════════════════════════════

static const BannerChar CHAR_A = {'A', {
    " █████╗ ",
    "██╔══██╗",
    "███████║",
    "██╔══██║",
    "██║  ██║",
    "╚═╝  ╚═╝"
}};

static const BannerChar CHAR_B = {'B', {
    "██████╗ ",
    "██╔══██╗",
    "██████╔╝",
    "██╔══██╗",
    "██████╔╝",
    "╚═════╝ "
}};

static const BannerChar CHAR_C = {'C', {
    " ██████╗",
    "██╔════╝",
    "██║     ",
    "██║     ",
    "╚██████╗",
    " ╚═════╝"
}};

static const BannerChar CHAR_D = {'D', {
    "██████╗ ",
    "██╔══██╗",
    "██║  ██║",
    "██║  ██║",
    "██████╔╝",
    "╚═════╝ "
}};

static const BannerChar CHAR_E = {'E', {
    "███████╗",
    "██╔════╝",
    "█████╗  ",
    "██╔══╝  ",
    "███████╗",
    "╚══════╝"
}};

static const BannerChar CHAR_F = {'F', {
    "███████╗",
    "██╔════╝",
    "█████╗  ",
    "██╔══╝  ",
    "██║     ",
    "╚═╝     "
}};

static const BannerChar CHAR_G = {'G', {
    " ██████╗ ",
    "██╔════╝ ",
    "██║  ███╗",
    "██║   ██║",
    "╚██████╔╝",
    " ╚═════╝ "
}};

static const BannerChar CHAR_H = {'H', {
    "██╗  ██╗",
    "██║  ██║",
    "███████║",
    "██╔══██║",
    "██║  ██║",
    "╚═╝  ╚═╝"
}};

static const BannerChar CHAR_I = {'I', {
    "██╗",
    "██║",
    "██║",
    "██║",
    "██║",
    "╚═╝"
}};

static const BannerChar CHAR_J = {'J', {
    "     ██╗",
    "     ██║",
    "     ██║",
    "██   ██║",
    "╚█████╔╝",
    " ╚════╝ "
}};

static const BannerChar CHAR_K = {'K', {
    "██╗  ██╗",
    "██║ ██╔╝",
    "█████╔╝ ",
    "██╔═██╗ ",
    "██║  ██╗",
    "╚═╝  ╚═╝"
}};

static const BannerChar CHAR_L = {'L', {
    "██╗     ",
    "██║     ",
    "██║     ",
    "██║     ",
    "███████╗",
    "╚══════╝"
}};

static const BannerChar CHAR_M = {'M', {
    "███╗   ███╗",
    "████╗ ████║",
    "██╔████╔██║",
    "██║╚██╔╝██║",
    "██║ ╚═╝ ██║",
    "╚═╝     ╚═╝"
}};

static const BannerChar CHAR_N = {'N', {
    "███╗   ██╗",
    "████╗  ██║",
    "██╔██╗ ██║",
    "██║╚██╗██║",
    "██║ ╚████║",
    "╚═╝  ╚═══╝"
}};

static const BannerChar CHAR_O = {'O', {
    " ██████╗ ",
    "██╔═══██╗",
    "██║   ██║",
    "██║   ██║",
    "╚██████╔╝",
    " ╚═════╝ "
}};

static const BannerChar CHAR_P = {'P', {
    "██████╗ ",
    "██╔══██╗",
    "██████╔╝",
    "██╔═══╝ ",
    "██║     ",
    "╚═╝     "
}};

static const BannerChar CHAR_Q = {'Q', {
    " ██████╗ ",
    "██╔═══██╗",
    "██║   ██║",
    "██║▄▄ ██║",
    "╚██████╔╝",
    " ╚══▀▀═╝ "
}};

static const BannerChar CHAR_R = {'R', {
    "██████╗ ",
    "██╔══██╗",
    "██████╔╝",
    "██╔══██╗",
    "██║  ██║",
    "╚═╝  ╚═╝"
}};

static const BannerChar CHAR_S = {'S', {
    "███████╗",
    "██╔════╝",
    "███████╗",
    "╚════██║",
    "███████║",
    "╚══════╝"
}};

static const BannerChar CHAR_T = {'T', {
    "████████╗",
    "╚══██╔══╝",
    "   ██║   ",
    "   ██║   ",
    "   ██║   ",
    "   ╚═╝   "
}};

static const BannerChar CHAR_U = {'U', {
    "██╗   ██╗",
    "██║   ██║",
    "██║   ██║",
    "██║   ██║",
    "╚██████╔╝",
    " ╚═════╝ "
}};

static const BannerChar CHAR_V = {'V', {
    "██╗   ██╗",
    "██║   ██║",
    "██║   ██║",
    "╚██╗ ██╔╝",
    " ╚████╔╝ ",
    "  ╚═══╝  "
}};

static const BannerChar CHAR_W = {'W', {
    "██╗    ██╗",
    "██║    ██║",
    "██║ █╗ ██║",
    "██║███╗██║",
    "╚███╔███╔╝",
    " ╚══╝╚══╝ "
}};

static const BannerChar CHAR_X = {'X', {
    "██╗  ██╗",
    "╚██╗██╔╝",
    " ╚███╔╝ ",
    " ██╔██╗ ",
    "██╔╝ ██╗",
    "╚═╝  ╚═╝"
}};

static const BannerChar CHAR_Y = {'Y', {
    "██╗   ██╗",
    "╚██╗ ██╔╝",
    " ╚████╔╝ ",
    "  ╚██╔╝  ",
    "   ██║   ",
    "   ╚═╝   "
}};

static const BannerChar CHAR_Z = {'Z', {
    "███████╗",
    "╚══███╔╝",
    "  ███╔╝ ",
    " ███╔╝  ",
    "███████╗",
    "╚══════╝"
}};

// ══════════════════════════════════════════════════════════════
//                         ЦИФРЫ 0-9
// ══════════════════════════════════════════════════════════════

static const BannerChar CHAR_0 = {'0', {
    " ██████╗ ",
    "██╔═████╗",
    "██║██╔██║",
    "████╔╝██║",
    "╚██████╔╝",
    " ╚═════╝ "
}};

static const BannerChar CHAR_1 = {'1', {
    " ██╗",
    "███║",
    "╚██║",
    " ██║",
    " ██║",
    " ╚═╝"
}};

static const BannerChar CHAR_2 = {'2', {
    "██████╗ ",
    "╚════██╗",
    " █████╔╝",
    "██╔═══╝ ",
    "███████╗",
    "╚══════╝"
}};

static const BannerChar CHAR_3 = {'3', {
    "██████╗ ",
    "╚════██╗",
    " █████╔╝",
    " ╚═══██╗",
    "██████╔╝",
    "╚═════╝ "
}};

static const BannerChar CHAR_4 = {'4', {
    "██╗  ██╗",
    "██║  ██║",
    "███████║",
    "╚════██║",
    "     ██║",
    "     ╚═╝"
}};

static const BannerChar CHAR_5 = {'5', {
    "███████╗",
    "██╔════╝",
    "███████╗",
    "╚════██║",
    "███████║",
    "╚══════╝"
}};

static const BannerChar CHAR_6 = {'6', {
    " ██████╗ ",
    "██╔════╝ ",
    "███████╗ ",
    "██╔═══██╗",
    "╚██████╔╝",
    " ╚═════╝ "
}};

static const BannerChar CHAR_7 = {'7', {
    "███████╗",
    "╚════██║",
    "    ██╔╝",
    "   ██╔╝ ",
    "   ██║  ",
    "   ╚═╝  "
}};

static const BannerChar CHAR_8 = {'8', {
    " █████╗ ",
    "██╔══██╗",
    "╚█████╔╝",
    "██╔══██╗",
    "╚█████╔╝",
    " ╚════╝ "
}};

static const BannerChar CHAR_9 = {'9', {
    " █████╗ ",
    "██╔══██╗",
    "╚██████║",
    " ╚═══██║",
    " █████╔╝",
    " ╚════╝ "
}};

// ══════════════════════════════════════════════════════════════
//                         СПЕЦСИМВОЛЫ
// ══════════════════════════════════════════════════════════════

static const BannerChar CHAR_SPACE = {' ', {
    "    ",
    "    ",
    "    ",
    "    ",
    "    ",
    "    "
}};

static const BannerChar CHAR_EXCLAIM = {'!', {
    "██╗",
    "██║",
    "██║",
    "╚═╝",
    "██╗",
    "╚═╝"
}};

static const BannerChar CHAR_QUESTION = {'?', {
    "██████╗ ",
    "╚════██╗",
    "  ▄███╔╝",
    "  ▀▀══╝ ",
    "  ██╗   ",
    "  ╚═╝   "
}};

static const BannerChar CHAR_DOT = {'.', {
    "   ",
    "   ",
    "   ",
    "   ",
    "██╗",
    "╚═╝"
}};

static const BannerChar CHAR_COMMA = {',', {
    "   ",
    "   ",
    "   ",
    "   ",
    "▄█╗",
    "╚═╝"
}};

static const BannerChar CHAR_COLON = {':', {
    "   ",
    "██╗",
    "╚═╝",
    "██╗",
    "╚═╝",
    "   "
}};

static const BannerChar CHAR_SEMICOLON = {';', {
    "   ",
    "██╗",
    "╚═╝",
    "▄█╗",
    "▀═╝",
    "   "
}};

static const BannerChar CHAR_DASH = {'-', {
    "        ",
    "        ",
    "███████╗",
    "╚══════╝",
    "        ",
    "        "
}};

static const BannerChar CHAR_UNDERSCORE = {'_', {
    "        ",
    "        ",
    "        ",
    "        ",
    "███████╗",
    "╚══════╝"
}};

static const BannerChar CHAR_PLUS = {'+', {
    "       ",
    "  ██╗  ",
    "██████╗",
    "╚═██╔═╝",
    "  ╚═╝  ",
    "       "
}};

static const BannerChar CHAR_EQUALS = {'=', {
    "        ",
    "███████╗",
    "╚══════╝",
    "███████╗",
    "╚══════╝",
    "        "
}};

static const BannerChar CHAR_AT = {'@', {
    " ██████╗ ",
    "██╔═══██╗",
    "██║██╗██║",
    "██║██║██║",
    "╚█║████╔╝",
    " ╚╝╚═══╝ "
}};

static const BannerChar CHAR_HASH = {'#', {
    " ██╗ ██╗ ",
    "████████╗",
    "╚██╔═██╔╝",
    "████████╗",
    "╚██╔═██╔╝",
    " ╚═╝ ╚═╝ "
}};

static const BannerChar CHAR_DOLLAR = {'$', {
    "▄▄███▄▄·",
    "██╔════╝",
    "███████╗",
    "╚════██║",
    "███████║",
    "╚═▀▀▀══╝"
}};

static const BannerChar CHAR_PERCENT = {'%', {
    "██╗ ██╗",
    "╚═╝██╔╝",
    "  ██╔╝ ",
    " ██╔╝  ",
    "██╔╝██╗",
    "╚═╝ ╚═╝"
}};

static const BannerChar CHAR_AMPERSAND = {'&', {
    " ████╗  ",
    "██╔═██╗ ",
    "╚████╔╝ ",
    "██╔══██╗",
    "╚█████╔╝",
    " ╚════╝ "
}};

static const BannerChar CHAR_ASTERISK = {'*', {
    "      ",
    "▄ ██╗▄",
    " ████╗",
    "▀╚██╔▀",
    "  ╚═╝ ",
    "      "
}};

static const BannerChar CHAR_LPAREN = {'(', {
    " ██╗",
    "██╔╝",
    "██║ ",
    "██║ ",
    "╚██╗",
    " ╚═╝"
}};

static const BannerChar CHAR_RPAREN = {')', {
    "██╗ ",
    "╚██╗",
    " ██║",
    " ██║",
    "██╔╝",
    "╚═╝ "
}};

static const BannerChar CHAR_LBRACKET = {'[', {
    "███╗",
    "██╔╝",
    "██║ ",
    "██║ ",
    "███╗",
    "╚══╝"
}};

static const BannerChar CHAR_RBRACKET = {']', {
    "███╗",
    "╚██║",
    " ██║",
    " ██║",
    "███║",
    "╚══╝"
}};

static const BannerChar CHAR_LBRACE = {'{', {
    "  ██╗",
    " ██╔╝",
    "██╔╝ ",
    " ██╗ ",
    " ╚██╗",
    "  ╚═╝"
}};

static const BannerChar CHAR_RBRACE = {'}', {
    "██╗  ",
    "╚██╗ ",
    " ╚██╗",
    " ██╔╝",
    "██╔╝ ",
    "╚═╝  "
}};

static const BannerChar CHAR_SLASH = {'/', {
    "    ██╗",
    "   ██╔╝",
    "  ██╔╝ ",
    " ██╔╝  ",
    "██╔╝   ",
    "╚═╝    "
}};

static const BannerChar CHAR_BACKSLASH = {'\\', {
    "██╗    ",
    "╚██╗   ",
    " ╚██╗  ",
    "  ╚██╗ ",
    "   ╚██╗",
    "    ╚═╝"
}};

static const BannerChar CHAR_PIPE = {'|', {
    "██╗",
    "██║",
    "██║",
    "██║",
    "██║",
    "╚═╝"
}};

static const BannerChar CHAR_LESS = {'<', {
    "  ██╗",
    " ██╔╝",
    "██╔╝ ",
    "╚██╗ ",
    " ╚██╗",
    "  ╚═╝"
}};

static const BannerChar CHAR_GREATER = {'>', {
    "██╗  ",
    "╚██╗ ",
    " ╚██╗",
    " ██╔╝",
    "██╔╝ ",
    "╚═╝  "
}};

static const BannerChar CHAR_QUOTE = {'\'', {
    "██╗",
    "╚█╔╝",
    "╚═╝",
    "   ",
    "   ",
    "   "
}};

static const BannerChar CHAR_DQUOTE = {'"', {
    "██╗██╗",
    "╚█╔╝█╔╝",
    "╚═╝╚═╝",
    "      ",
    "      ",
    "      "
}};

// ══════════════════════════════════════════════════════════════
//                    ТАБЛИЦА ВСЕХ СИМВОЛОВ
// ══════════════════════════════════════════════════════════════

static const BannerChar* ALL_CHARS[] = {
    // Буквы
    &CHAR_A, &CHAR_B, &CHAR_C, &CHAR_D, &CHAR_E, &CHAR_F, &CHAR_G,
    &CHAR_H, &CHAR_I, &CHAR_J, &CHAR_K, &CHAR_L, &CHAR_M, &CHAR_N,
    &CHAR_O, &CHAR_P, &CHAR_Q, &CHAR_R, &CHAR_S, &CHAR_T, &CHAR_U,
    &CHAR_V, &CHAR_W, &CHAR_X, &CHAR_Y, &CHAR_Z,
    // Цифры
    &CHAR_0, &CHAR_1, &CHAR_2, &CHAR_3, &CHAR_4,
    &CHAR_5, &CHAR_6, &CHAR_7, &CHAR_8, &CHAR_9,
    // Спецсимволы
    &CHAR_SPACE, &CHAR_EXCLAIM, &CHAR_QUESTION, &CHAR_DOT, &CHAR_COMMA,
    &CHAR_COLON, &CHAR_SEMICOLON, &CHAR_DASH, &CHAR_UNDERSCORE,
    &CHAR_PLUS, &CHAR_EQUALS, &CHAR_AT, &CHAR_HASH, &CHAR_DOLLAR,
    &CHAR_PERCENT, &CHAR_AMPERSAND, &CHAR_ASTERISK,
    &CHAR_LPAREN, &CHAR_RPAREN, &CHAR_LBRACKET, &CHAR_RBRACKET,
    &CHAR_LBRACE, &CHAR_RBRACE, &CHAR_SLASH, &CHAR_BACKSLASH,
    &CHAR_PIPE, &CHAR_LESS, &CHAR_GREATER, &CHAR_QUOTE, &CHAR_DQUOTE,
    NULL  // Терминатор
};

#define ALL_CHARS_COUNT (sizeof(ALL_CHARS) / sizeof(ALL_CHARS[0]) - 1)

#endif // ALPHABET_H
