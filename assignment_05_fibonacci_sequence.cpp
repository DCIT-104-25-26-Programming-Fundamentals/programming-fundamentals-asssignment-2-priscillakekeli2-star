#include <iostream>
using namespace std;

// Function to print the first N Fibonacci numbers
void printFibonacci(int n)
{
    if (n <= 0)
    {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }

    int first = 0, second = 1;

    cout << "Fibonacci sequence: ";

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << first << " ";
        }
        else if (i == 2)
        {
            cout << second << " ";
        }
        else
        {
            int next = first + second;
            cout << next << " ";
            first = second;
            second = next;
        }
    }

    cout << endl;
}

// Function to check whether a number is a Fibonacci number
void checkFibonacci(int num)
{
    if (num < 0)
    {
        cout << num << " is NOT a Fibonacci number." << endl;
        return;
    }

    int first = 0, second = 1;

    while (second < num)
    {
        int next = first + second;
        first = second;
        second = next;
    }

    if (num == 0 || second == num)
    {
        cout << num << " is a Fibonacci number." << endl;
    }
    else
    {
        cout << num << " is NOT a Fibonacci number." << endl;
    }
}

int main()
{
    int n, number;

    // Part A
    cout << "How many terms? ";
    cin >> n;

    printFibonacci(n);

    // Part B
    cout << "Enter a number to check: ";
    cin >> number;

    checkFibonacci(number);

    return 0;
}