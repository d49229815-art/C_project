# AI Coding Agent Instructions for C_Projects

## Project Overview
This is a beginner-level C programming learning project containing simple algorithmic exercises and basic I/O operations. The codebase consists of single-file C programs demonstrating fundamental concepts.

## Architecture & Structure
- **Single-file programs**: Each `.c` file is self-contained with `main()` function
- **Global variables**: Used for simple state management (e.g., `unsigned char a = 1, b = 1;`)
- **Include patterns**: Standard library headers like `<stdio.h>` for I/O operations

## Build & Development Workflow
- **Compiler**: GCC from MSYS2 UCRT64 (`C:\msys64\ucrt64\bin\gcc.exe`)
- **Build command**: `gcc.exe -fdiagnostics-color=always -g ${file} -o ${fileDirname}\${fileBasenameNoExtension}.exe`
- **Debugging**: Compiled with `-g` flag for gdb debugging
- **Execution**: Run generated `.exe` files directly

## Code Patterns & Conventions
- **Constants**: Defined using `#define` (e.g., `#define PI 3` - note: integer approximation)
- **Variable naming**: Short names for globals (`a`, `b`, `z1-z5`), descriptive for locals (`pre_wage`, `num[3]`)
- **Code organization**: Active code at bottom, commented exercises above
- **I/O style**: `printf()` for output, `scanf()` for input (commented examples)
- **Array usage**: Fixed-size arrays for digit storage (e.g., `int num[3]`)

## Common Patterns
- **Digit manipulation**: Extract digits using modulo/division (e.g., `n % 10`, `n / 10 % 10`)
- **Mathematical calculations**: Simple arithmetic for sums, averages, geometric formulas
- **Loop structures**: Nested while loops for tabular output (multiplication tables)
- **Comment style**: `//` for single lines, `/* */` for blocks, often used to disable/enable code sections

## Key Examples
- **Three-digit processing** (lines 25-32): Extract digits, calculate sum, reverse number
- **Salary calculation** (lines 37-44): Tax and insurance computations with simple formulas
- **Commented exercises**: Multiplication tables, circle circumference, input validation patterns

## Development Tips
- Test calculations manually before implementing
- Use integer division carefully (truncation behavior)
- Comment out unused code rather than deleting for reference
- Focus on algorithmic clarity over optimization for learning exercises