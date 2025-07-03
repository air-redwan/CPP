#include<iostream>
using namespace std;

int main()
{
    int num1, num2, add, sub, mul, div, mod ;
    
    cout << "Inter a number : " ;
    cin >> num1;
    
    cout << "Inter another number :" ;
    cin >> num2;
    
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;
    
    cout << "Addition : " << add << endl;
    cout << "Subtraction : " << sub << endl;
    cout << "Multiplication : " << mul << endl;
    cout << "Division : " << div << endl;
    cout << "Modulus : " << mod << endl;
    
    return 0;
}