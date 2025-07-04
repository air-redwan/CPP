#include <iostream>
using namespace std;

int main() {
    

/*VARIABLE*/

    int num1 , num2 , num3 , sum ,average;

 /*TAKING INPUT*/

    cout << "Give the value of num1 : ";
    cin >> num1;

    cout << "Give the value of num2 : ";
    cin >> num2;   

    cout << "Give the value of num3 : ";
    cin >> num3;

    sum = num1 + num2 + num3 ;
    average = sum / 3 ;

    cout << "\n Average : " << average;

    return 0;
}
