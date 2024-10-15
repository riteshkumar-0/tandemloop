#include <iostream>
#include <string>

using namespace std;

class Calculator
{
public:
    double calculate(double a, double b, string operation)
    {
        if (operation == "addition")
        {
            return a + b;
        }
        else if (operation == "subtraction")
        {
            return a - b;
        }
        else if (operation == "multiplication")
        {
            return a * b;
        }
        else if (operation == "division")
        {
            if (b != 0)
            {
                return a / b;
            }
            else
            {
                cout << "Error: Division by zero is undefined!" << endl;
                return 0;
            }
        }
        else
        {
            cout << "Error: Invalid operation!" << endl;
            return 0;
        }
    }
};

int main()
{
    Calculator calc;
    double a, b;
    string operation;

    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    cout << "Enter operation (addition, subtraction, multiplication, division): ";
    cin >> operation;

    double result = calc.calculate(a, b, operation);
    cout << "Result: " << result << endl;

    return 0;
}