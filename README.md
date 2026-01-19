# TXT2CMD

> 🎨 **Cross-platform CLI tool for generating stylish ASCII art banners in your terminal**

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux%20%7C%20macOS-green.svg)]()
[![Language](https://img.shields.io/badge/Language-C-blue.svg)]()

---

## 📖 Table of Contents

- [Overview](#-overview)
- [Features](#-features)
- [Project Structure](#-project-structure)
- [Building](#-building)
- [Usage](#-usage)
- [Examples](#-examples)
- [Supported Characters](#-supported-characters)
- [Contributing](#-contributing)
- [License](#-license)

---

## 🎯 Overview

**TXT2CMD** is a lightweight, portable CLI tool that transforms plain text into eye-catching ASCII art banners using Unicode box-drawing characters. Perfect for creating headers in code comments, terminal greetings, README decorations, or adding visual flair to your command-line applications [web:1][web:3].

The tool uses elegant box-drawing characters (╔═╗║╚╝) to render large, readable text art that works seamlessly across modern terminals with UTF-8 support [web:7].

---

## ✨ Features

### Core Features
- 🎨 **Beautiful ASCII Art** — Uses Unicode box-drawing characters for clean, modern banners
- 🔤 **Full Character Support** — A-Z letters (case-insensitive), 0-9 digits, 40+ special symbols
- ⚙️ **Flexible Options** — Borders, custom prefixes, interactive mode
- 🌍 **Cross-Platform** — Works on Windows, Linux, and macOS
- 📦 **Zero Dependencies** — Single-file executable, no external libraries

### Technical Features
- 🔄 **UTF-8 Native** — Proper encoding handling on all platforms
- 🎯 **Smart Character Mapping** — Automatic fallback for unsupported symbols
- 📝 **Comment-Ready Output** — Built-in prefix support for code comments (`//`, `#`, etc.)
- 🖥️ **Terminal-Friendly** — Optimized for console output with proper formatting

---

## 📁 Project Structure

```
Text2Terminal/
├── dist/             # AFTER BUILD
│   ├── main          # Linux/macOS executable
│   └── main.exe      # Windows executable
├── src/
│   └── alphabet.h    # Character definitions (A-Z, 0-9, symbols)
└── main.c            # Main program logic
```

---

## 🔨 Building

### Prerequisites

| Platform | Requirements |
|----------|-------------|
| **Linux** | `gcc` (or `clang`), UTF-8 locale support |
| **macOS** | `clang` (Xcode CLI tools) |
| **Windows** | MinGW-w64 (`gcc`) or MSVC |

### Build Commands

```bash
# Linux / macOS
cd "~TXT2CMD/" && mkdir -p dist && gcc main.c -o dist/main && x86_64-w64-mingw32-gcc main.c -o dist/main.exe && echo '--- Linux Output ---' && ./dist/main

# Windows (MinGW)
cd "~TXT2CMD/" && mkdir -p dist && gcc -o dist/main.exe main.c -std=c99 -Wall -Wextra

```

### Output Location
Compiled binaries are placed in the `dist/` directory.

---

## 🚀 Usage

### Command-Line Syntax

```bash
./main [options] [text]
```

### Options

| Option | Description |
|--------|-------------|
| `-h`, `--help` | Show help message |
| `-n`, `--no-border` | Render without top/bottom borders |
| `-p`, `--prefix` | Set custom line prefix (default: `"// "`) |
| `-l`, `--list` | Display all supported characters |

### Interactive Mode

If no text is provided, the program enters interactive mode:

```bash
./main
```

```
╔════════════════════════════════════════╗
║     ASCII BANNER GENERATOR v1.0        ║
╚════════════════════════════════════════╝

Your text: 
```

---

## 📋 Examples

### Example 1: Basic Banner

```bash
./main HELLO
```

**Output:**
```
═══════════════════════════════════════════════════════════
//    ██╗  ██╗███████╗██╗     ██╗      ██████╗ 
//    ██║  ██║██╔════╝██║     ██║     ██╔═══██╗
//    ███████║█████╗  ██║     ██║     ██║   ██║
//    ██╔══██║██╔══╝  ██║     ██║     ██║   ██║
//    ██║  ██║███████╗███████╗███████╗╚██████╔╝
//    ╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═════╝ 
═══════════════════════════════════════════════════════════
```

### Example 2: Without Borders

```bash
./main -n "CODE 2026"
```

**Output:**
```
//     ██████╗ ██████╗ ██████╗ ███████╗    ██████╗  ██████╗ ██████╗  ██████╗ 
//    ██╔════╝██╔═══██╗██╔══██╗██╔════╝    ╚════██╗██╔═████╗╚════██╗██╔════╝ 
//    ██║     ██║   ██║██║  ██║█████╗       █████╔╝██║██╔██║ █████╔╝███████╗ 
//    ██║     ██║   ██║██║  ██║██╔══╝      ██╔═══╝ ████╔╝██║██╔═══╝ ██╔═══██╗
//    ╚██████╗╚██████╔╝██████╔╝███████╗    ███████╗╚██████╔╝███████╗╚██████╔╝
//     ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝    ╚══════╝ ╚═════╝ ╚══════╝ ╚═════╝ 
```

### Example 3: Custom Prefix for Python Comments

```bash
./main -p "# " -n "DEBUG"
```

**Output:**
```
#    ██████╗ ███████╗██████╗ ██╗   ██╗ ██████╗ 
#    ██╔══██╗██╔════╝██╔══██╗██║   ██║██╔════╝ 
#    ██║  ██║█████╗  ██████╔╝██║   ██║██║  ███╗
#    ██║  ██║██╔══╝  ██╔══██╗██║   ██║██║   ██║
#    ██████╔╝███████╗██████╔╝╚██████╔╝╚██████╔╝
#    ╚═════╝ ╚══════╝╚═════╝  ╚═════╝  ╚═════╝ 
```

---

## 🔤 Supported Characters

### Character Set Overview

```bash
./main --list
```

**Output:**
```
Supported Symbols:
  Letters:    A-Z (case-insensitive)
  Digits:     0-9
  Symbols:    ! ? . , : ; - _ + = @ # $ % & * ( ) [ ] { } / \ | < > ' "
```

### Full Character Table

| Category | Characters |
|----------|-----------|
| **Uppercase Letters** | A B C D E F G H I J K L M N O P Q R S T U V W X Y Z |
| **Digits** | 0 1 2 3 4 5 6 7 8 9 |
| **Punctuation** | `.` `,` `:` `;` `!` `?` `'` `"` |
| **Operators** | `+` `-` `=` `*` `/` `\` `%` `&` `@` `#` `$` |
| **Brackets** | `(` `)` `[` `]` `{` `}` `<` `>` `|` |
| **Special** | `_` (underscore), ` ` (space) |

> **Note:** Lowercase letters are automatically converted to uppercase. Unknown characters render as spaces.

---

## ⚙️ Advanced Usage

### Use in Scripts

```bash
#!/bin/bash
echo "=== Build Started ==="
./main -n -p "// " "BUILD v$(date +%Y%m%d)"
make all
echo "=== Build Complete ==="
```

### Generate README Headers

```bash
./main -n "PROJECT NAME" > header.txt
cat header.txt README.md > README_with_banner.md
```

### Terminal Greeting

Add to your `.bashrc` or `.zshrc`:

```bash
~/Text2Terminal/main -n -p "" "WELCOME $(whoami)"
```

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

- **Add New Characters** — Extend `alphabet.h` with additional symbols
- **Improve Fonts** — Design alternative character styles
- **Platform Testing** — Test on different terminals and OS versions
- **Documentation** — Enhance examples and usage guides

### Code Style Guidelines

- **Standard:** C99
- **Indentation:** 4 spaces
- **Naming:** `camelCase` for functions, `UPPER_CASE` for constants
- **Comments:** Use Russian or English inline comments

---

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 🙏 Acknowledgments

- Inspired by classic tools like [FIGlet](http://www.figlet.org/) and [TOIlet](https://github.com/cacalabs/toilet) [web:3][web:9]
- Unicode box-drawing characters from the [Unicode Standard](https://unicode.org/charts/PDF/U2500.pdf) (U+2500–U+257F) [web:7]
- Thanks to the open-source community for ASCII art generators [web:4][web:5]

---

## 🔧 Troubleshooting

### Characters Display as Question Marks (?)

**Solution:** Ensure your terminal supports UTF-8 encoding.

```bash
# Linux/macOS
export LANG=en_US.UTF-8

# Windows
chcp 65001
```

### Compilation Errors on Windows

**Solution:** Use MinGW-w64 with UTF-8 support or enable UTF-8 in Windows Terminal.

### Output Misaligned

**Solution:** Use a monospaced font (e.g., Consolas, Courier New, Monaco).

---

<p align="center">
  Made with ❤️ by Heysh1n
</p>
