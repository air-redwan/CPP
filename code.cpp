#include <iostream>
using namespace std;

int main() {
 int a;
 int b;
 int sum ,mul ,sub , div;
cout << "Enter a number: " << endl;
cin >> a;
cout << "Enter another number: " << endl;
cin >> b;

sum = a + b;
mul = a * b;
sub = a - b;   
div = a / b;

        cout << "The sum is: " << sum << endl;
        cout << "The multiplication is: " << mul << endl;
        cout << "The subtraction is: " << sub << endl;
        cout << "The division is: " << div << endl;

        cout << "The average is: " << (sum / 2) << endl;
        cout << "The modulus is: " << (a % b) << endl;
        cout << "The square of the first number is: " << (a * a) << endl;
        cout << "The square of the second number is: " << (b * b) << endl;
        
        if (a > b) {
            cout << "The first number is greater than the second number." << endl;
        } else if (a < b) {
            cout << "The first number is less than the second number." << endl;
        } else {
            cout << "Both numbers are equal." << endl;
        }
               if (b != 0) {
            cout << "The remainder of the first number divided by the second number is: " << (a % b) << endl;
        } else {
            cout << "Cannot perform modulus operation with zero." << endl;
        }

        if (a != 0 && b != 0) {
            cout << "The first number divided by the second number is: " << (static_cast<double>(a) / b) << endl;
        } else {
            cout << "Cannot perform division by zero." << endl;
        }

        if (a > 0 && b > 0) {
            cout << "Both numbers are positive." << endl;
        } else if (a < 0 && b < 0) {
            cout << "Both numbers are negative." << endl;
        } else {
            cout << "One number is positive and the other is negative." << endl;
        }

    return 0;
}
