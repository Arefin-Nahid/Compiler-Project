# Custom Programming Language Compiler

This project is a compiler implementation for a custom programming language that combines features from multiple popular programming languages. The compiler is implemented using Flex (Lexical Analyzer) and Bison (Parser), offering comprehensive language features with robust error handling and type safety.

## Key Components

### 1. Lexical Analyzer (`nahid.l`)
- Tokenizes the input source code.
- Recognizes keywords, operators, identifiers, literals, and more.
- Generates tokens for the parser.

### 2. Parser (`nahid.y`)
- Implements grammar rules for the language.
- Handles syntax validation and ensures proper structure.
- Manages the symbol table and performs type checking.
- Processes expressions, statements, and control structures.

### 3. Identifier Management (`identifier.c`)
- Provides symbol table functionality.
- Handles variable declarations, type management, and operations.
- Manages data types and performs type conversions.
- Supports basic arithmetic and logical operations.

## Language Features

The custom programming language includes the following features:

- **Object-Oriented Programming (OOP)**: Supports class-based programming.
- **Data Types**: Includes `Int`, `Double`, `String`, and more.
- **Control Structures**: Implements `if-else`, `switch-case`, and loop constructs.
- **Mathematical Functions**: Provides trigonometric and logarithmic functions.
- **Array Support**: Supports multi-dimensional arrays.
- **Variable Declarations**: Allows variable assignments and type declarations.
- **Import System**: Enables importing modules.
- **Functions**: Supports function definitions with return types.

## Output Generation

The compiler produces the following outputs:

1. **Token Output** (`token_output.txt`): Contains a list of tokens generated during lexical analysis.
2. **Compilation Info** (`info_output.txt`): Provides detailed compilation information.
3. **Error Messages**: Reports any compilation issues with detailed explanations.

## Project Structure

```
project-root/
├── nahid.l             # Lexical Analyzer source file
├── nahid.y             # Parser source file
├── identifier.c        # Symbol table and identifier management
├── Makefile            # Build automation script
├── token_output.txt    # Token output file
├── info_output.txt     # Compilation information output
├── examples/           # Example source code files for testing
└── README.md           # Project documentation
```

## Getting Started

### Prerequisites

Ensure you have the following installed:
- `Flex`: For lexical analysis
- `Bison`: For syntax parsing
- `gcc`: For compiling C code

### Build Instructions

1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd <repository_name>
   ```

2. Build the compiler:
   ```bash
   make
   ```

3. Test the compiler with an example program:
   ```bash
   ./compiler < examples/test_program.nahid
   ```

4. View the outputs:
   - Tokens: `cat token_output.txt`
   - Compilation info: `cat info_output.txt`

## Usage

To compile a source file:
```bash
./compiler <source_file.nahid>
```
Replace `<source_file.nahid>` with the path to your program file.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

## Acknowledgments

- **Flex and Bison Documentation**: For guidance on lexical and syntax analysis.
- **Compiler Design Textbooks**: Inspiration for language features and implementation techniques.

---

Feel free to explore the project and experiment with the custom programming language!
