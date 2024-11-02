#include <iostream>
#include "_pause.h"

using namespace std;

int divide(int a, int b) {
    return a / b;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int num1, num2, num3, num4, num5, num6;
    cout << "Enter six non-zero integers (two integers per division): \n";
    cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;
    
    if (num2 == 0 || num4 == 0 || num6 == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }
    
    cout << "Results of divisions: \n";
    cout << "Result 1: " << divide(num1, num2) << endl;
    cout << "Result 2: " << divide(num3, num4) << endl;
    cout << "Result 3: " << divide(num5, num6) << endl;

    short value;
    cout << "\nEnter a short value (10 to 99): ";
    cin >> value;
    if (value < 10 || value > 99) {
        cout << "Invalid input. Please enter a value between 10 and 99." << endl;
        return 1;
    }
    cout << "Digits: " << value / 10 << " " << value % 10 << endl;

    int n;
    cout << "\nEnter the position (n) of the Fibonacci number you want to find: ";
    cin >> n;
    if (n < 0) {
        cout << "Invalid input. Please enter a non-negative value." << endl;
        return 1;
    }
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    cin.ignore();
    
    _pause();
    return 0;
}