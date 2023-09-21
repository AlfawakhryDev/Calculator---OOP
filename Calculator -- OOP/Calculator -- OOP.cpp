#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

// Custom exception classes
class CalculatorError : public runtime_error {
public:
    CalculatorError(const string& message) : runtime_error(message) {}
};

class DivisionByZeroError : public CalculatorError {
public:
    DivisionByZeroError() : CalculatorError("Division by zero is not allowed.") {}
};

enum class OperationType {
    ADD,
    SUBTRACT,
    CLEAR,
    DIVIDE,
    MULTIPLY,
    PRINT_RESULT,
    SQUARE_ROOT,
    EXPONENTIATION,
    MODULUS
};

class Calculator {
private:
    int _currentNumber;
    vector<pair<OperationType, int>> operationHistory;

public:
    Calculator() : _currentNumber(0) {}

    int getCurrentNumber() const {
        return _currentNumber;
    }

    void setCurrentNumber(int value) {
        _currentNumber = value;
    }

    const vector<pair<OperationType, int>>& getOperationHistory() const {
        return operationHistory;
    }

    void performOperation(OperationType op, int userNumber = 0) {
        switch (op) {
        case OperationType::ADD:
            _currentNumber += userNumber;
            break;
        case OperationType::SUBTRACT:
            _currentNumber -= userNumber;
            break;
        case OperationType::CLEAR:
            _currentNumber = 0;
            break;
        case OperationType::DIVIDE:
            if (userNumber == 0) {
                throw DivisionByZeroError();
            }
            _currentNumber /= userNumber;
            break;
        case OperationType::MULTIPLY:
            _currentNumber *= userNumber;
            break;
        case OperationType::PRINT_RESULT:
            cout << "Result: " << _currentNumber << endl;
            break;
        case OperationType::SQUARE_ROOT:
            if (_currentNumber < 0) {
                throw CalculatorError("Square root of a negative number is not allowed.");
            }
            _currentNumber = sqrt(_currentNumber);
            break;
        case OperationType::EXPONENTIATION:
            _currentNumber = pow(_currentNumber, userNumber);
            break;
        case OperationType::MODULUS:
            if (userNumber == 0) {
                throw DivisionByZeroError();
            }
            _currentNumber %= userNumber;
            break;
        default:
            throw CalculatorError("Invalid operation.");
        }
        operationHistory.emplace_back(op, userNumber);
    }
};

int main() {
    Calculator calculator;

    try {
        calculator.performOperation(OperationType::CLEAR);
        calculator.performOperation(OperationType::ADD, 10);
        calculator.performOperation(OperationType::DIVIDE, 4);
        calculator.performOperation(OperationType::PRINT_RESULT);
        calculator.performOperation(OperationType::SQUARE_ROOT);
        calculator.performOperation(OperationType::EXPONENTIATION, 2);
        calculator.performOperation(OperationType::MODULUS, 5);

        cout << "Current Number: " << calculator.getCurrentNumber() << endl;
        cout << "Operation History:" << endl;
        for (const auto& operation : calculator.getOperationHistory()) {
            cout << "Operation: ";
            switch (operation.first) {
            case OperationType::ADD:
                cout << "ADD";
                break;
            case OperationType::SUBTRACT:
                cout << "SUBTRACT";
                break;
            case OperationType::CLEAR:
                cout << "CLEAR";
                break;
            case OperationType::DIVIDE:
                cout << "DIVIDE";
                break;
            case OperationType::MULTIPLY:
                cout << "MULTIPLY";
                break;
            case OperationType::SQUARE_ROOT:
                cout << "SQUARE_ROOT";
                break;
            case OperationType::EXPONENTIATION:
                cout << "EXPONENTIATION";
                break;
            case OperationType::MODULUS:
                cout << "MODULUS";
                break;
            default:
                cout << "UNKNOWN";
            }
            cout << ", Operand: " << operation.second << endl;
        }
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
