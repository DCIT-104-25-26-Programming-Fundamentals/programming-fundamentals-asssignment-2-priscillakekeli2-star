#include <iostream>
using namespace std;

// Function to print the multiplication table for one number
void singleTable(int number)
{
    cout << "\nMultiplication Table for " << number << ":\n";

    for (int i = 1; i <= 12; i++)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

// Function to print multiplication tables from 1 to N
void multipleTables(int n)
{
    if (n <= 0)
    {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }

    for (int num = 1; num <= n; num++)
    {
        cout << "\nMultiplication Table for " << num << ":\n";

        for (int i = 1; i <= 12; i++)
        {
            cout << num << " x " << i << " = " << num * i << endl;
        }

        cout << "---------------------------" << endl;
    }
}

int main()
{
    int number, n;

    // Part A
    cout << "Enter a number: ";
    cin >> number;

    singleTable(number);

    // Part B
    cout << "\nEnter N: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: N must be a positive integer." << endl;
        return 0;
    }

    multipleTables(n);

    return 0;
}