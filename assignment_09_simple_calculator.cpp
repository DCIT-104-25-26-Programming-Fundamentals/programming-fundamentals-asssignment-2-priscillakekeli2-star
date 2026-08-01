#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Function for addition
double add(double a, double b)
{
    return a + b;
}

// Function for subtraction
double subtract(double a, double b)
{
    return a - b;
}

// Function for multiplication
double multiply(double a, double b)
{
    return a * b;
}

// Function for division
double divide(double a, double b)
{
    return a / b;
}

// Function for modulus
int modulus(int a, int b)
{
    return a % b;
}

// Function for exponentiation
double power(double a, double b)
{
    return pow(a, b);
}

int main()
{
    int choice;
    double num1, num2;

    cout << fixed << setprecision(2);

    do
    {
        cout << "\n============================" << endl;
        cout << "     SIMPLE CALCULATOR" << endl;
        cout << "============================" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "6. Exponentiation" << endl;
        cout << "7. Quit" << endl;
        cout << "Select an operation (1-7): ";
        cin >> choice;

        if (choice >= 1 && choice <= 6)
        {
            cout << "Enter first number : ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
        }

        switch (choice)
        {
        case 1:
            cout << "Result: " << num1 << " + " << num2
                 << " = " << add(num1, num2) << endl;
            break;

        case 2:
            cout << "Result: " << num1 << " - " << num2
                 << " = " << subtract(num1, num2) << endl;
            break;

        case 3:
            cout << "Result: " << num1 << " * " << num2
                 << " = " << multiply(num1, num2) << endl;
            break;

        case 4:
            if (num2 == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << "Result: " << num1 << " / " << num2
                     << " = " << divide(num1, num2) << endl;
            }
            break;

        case 5:
            if ((int)num2 == 0)
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
            else
            {
                cout << "Result: " << (int)num1 << " % " << (int)num2
                     << " = " << modulus((int)num1, (int)num2) << endl;
            }
            break;

        case 6:
            cout << "Result: " << num1 << " ^ " << num2
                 << " = " << power(num1, num2) << endl;
            break;

        case 7:
            cout << "Goodbye!" << endl;
            break;

        default:
            cout << "Error: Invalid menu choice." << endl;
        }

    } while (choice != 7);

    return 0;
}