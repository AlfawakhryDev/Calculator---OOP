# C++ Calculator

This C++ program demonstrates a basic calculator implementation with support for various arithmetic operations and error handling using custom exception classes. The calculator can perform addition, subtraction, division, multiplication, square root, exponentiation, modulus, and clearing the current result. It also maintains an operation history.

## Table of Contents

- [Features](#features)
- [Usage](#usage)
- [Custom Exception Classes](#custom-exception-classes)
- [Operation Types](#operation-types)
- [Build and Run](#build-and-run)
- [License](#license)

## Features

- Basic arithmetic operations: addition, subtraction, division, multiplication, and modulus.
- Advanced operations: square root and exponentiation.
- Error handling for division by zero and taking the square root of a negative number.
- History tracking of performed operations.
- Clearing the current result.

## Usage

1. Initialize the `Calculator` class.
2. Use the `performOperation` method to execute various operations.
3. Access the current result with `getCurrentNumber`.
4. Retrieve the operation history with `getOperationHistory`.

## Custom Exception Classes

### CalculatorError

This is the base class for custom exceptions and extends `std::runtime_error`. It is used for general calculator errors.

### DivisionByZeroError

This exception is thrown when attempting to divide by zero. It is a subclass of `CalculatorError`.

## Operation Types

The program uses an `enum class OperationType` to represent different calculator operations:

- `ADD`: Addition
- `SUBTRACT`: Subtraction
- `CLEAR`: Clearing the result
- `DIVIDE`: Division
- `MULTIPLY`: Multiplication
- `PRINT_RESULT`: Printing the current result
- `SQUARE_ROOT`: Calculating the square root
- `EXPONENTIATION`: Raising to a power
- `MODULUS`: Calculating the modulus

## Build and Run

You can build and run the calculator program using a C++ compiler. Here are the steps:

1. Clone or download the repository.
2. Open a terminal and navigate to the project directory.
3. Compile the program using a C++ compiler (e.g., g++):
4. Run the compiled executable

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
