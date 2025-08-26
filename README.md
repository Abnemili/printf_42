# ft_printf

A custom implementation of the printf function in C, recreating the behavior of the standard library's printf with support for various format specifiers.

## 📋 Table of Contents

- [About](#about)
- [Format Specifiers](#format-specifiers)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Testing](#testing)
- [Project Structure](#project-structure)
- [Implementation Details](#implementation-details)
- [License](#license)

## 🎯 About

ft_printf is the second major project in the 1337 School curriculum after libft. The goal is to recode the printf function from the C standard library, handling various format specifiers and understanding variadic functions. This project deepens understanding of string manipulation, memory management, and formatted output.

## ⚙️ Format Specifiers

This implementation handles all mandatory format specifiers:

| Specifier | Description | Example |
|-----------|-------------|---------|
| `%c` | Single character | `ft_printf("%c", 'A')` → A |
| `%s` | String | `ft_printf("%s", "Hello")` → Hello |
| `%p` | Pointer address | `ft_printf("%p", ptr)` → 0x7fff5fbff7ac |
| `%d` | Decimal integer | `ft_printf("%d", 42)` → 42 |
| `%i` | Integer | `ft_printf("%i", -42)` → -42 |
| `%u` | Unsigned integer | `ft_printf("%u", 42)` → 42 |
| `%x` | Hexadecimal (lowercase) | `ft_printf("%x", 255)` → ff |
| `%X` | Hexadecimal (uppercase) | `ft_printf("%X", 255)` → FF |
| `%%` | Literal percent | `ft_printf("%%")` → % |

## 🚀 Getting Started

### Prerequisites

- GCC compiler
- Make
- Basic understanding of C programming

### Installation

1. Clone the repository:
```bash
git clone https://github.com/abnemili/printf_42.git
cd printf_42
```

2. Compile the library:
```bash
make
```

This will create `libftprintf.a` static library file.

## 💻 Usage

Include the header in your C files:
```c
#include "ft_printf.h"
```

Compile your program with the library:
```bash
gcc -Wall -Wextra -Werror your_file.c -L. -lftprintf
```

### Example Usage

```c
#include "ft_printf.h"

int main(void)
{
    int len;
    
    // Basic string output
    len = ft_printf("Hello, %s!\n", "42");
    ft_printf("Printed %d characters\n", len);
    
    // Numbers in different formats
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    ft_printf("Unsigned: %u\n", 4294967295U);
    
    // Pointer
    int x = 42;
    ft_printf("Address of x: %p\n", &x);
    
    // Character
    ft_printf("Character: %c\n", 'A');
    
    return (0);
}
```

## 🧪 Testing

### Manual Testing
Create test files and compile them with your library:
```bash
gcc -Wall -Wextra -Werror test.c -L. -lftprintf -o test
./test
```

### Comparison Testing
Test against the real printf:
```c
#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    printf("Real printf: %d\n", printf("Hello %s, number %d", "world", 42));
    ft_printf("My printf:  %d\n", ft_printf("Hello %s, number %d", "world", 42));
    return (0);
}
```

### Automated Testing
You can create your own tests or search for ft_printf testing frameworks that work with your implementation.

## 📁 Project Structure

```
printf_42/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_printf_utils.c    # Helper functions
└── README.md
```

## 🔧 Implementation Details

### Key Challenges Solved

1. **Variadic Functions**: Using `va_list`, `va_start`, `va_arg`, and `va_end` to handle variable arguments
2. **Format Parsing**: Parsing the format string to identify and handle different specifiers
3. **Number Base Conversion**: Converting integers to different bases (decimal, hexadecimal)
4. **Memory Management**: Proper allocation and deallocation of dynamic memory
5. **Return Value**: Tracking and returning the total number of characters printed

### Technical Approach

- **Modular Design**: Separate functions for each format specifier
- **Helper Functions**: Utility functions for common operations like number conversion
- **Error Handling**: Proper handling of edge cases and invalid inputs
- **Norminette Compliance**: Code follows 1337's coding standard

## 📊 Function Behavior

The function behaves identically to the standard printf for all implemented specifiers:
- Returns the number of characters printed
- Handles NULL pointers appropriately
- Maintains the same output format as the original printf

## 🤝 Contributing

This is my personal implementation of the ft_printf project at 1337 School. While the code is available for reference and learning purposes, please remember to follow 1337's academic integrity guidelines if you're a current student.

## 📄 License

This project was developed by me as part of the 1337 School curriculum. Feel free to explore and learn from the implementation!

---

**Note**: This is my personal implementation of ft_printf, created from scratch as part of the 1337 School curriculum. The function mimics the behavior of the standard printf function for all mandatory format specifiers.

*Crafted with 💻 by abnemili at 1337 School*
