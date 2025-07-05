#include <iostream>
using namespace std;

int main() {
    int mark;
    cout << "Enter Your Mark: ";
    cin >> mark;

    if (mark > 100 || mark < 0) {
        cout << "\nInvalid mark" << endl;
    }
    else if (mark >= 80) {
        cout << "\nGrade: A+" << endl;
    }
    else if (mark >= 70 && mark <= 79) {
        cout << "\nGrade: A" << endl;
    }
    else if (mark >= 60 && mark <= 69) {
        cout << "\nGrade: A-" << endl;
    }
    else if (mark >= 50 && mark <= 59) {
        cout << "\nGrade: B" << endl;
    }
    else if (mark >= 40 && mark <= 49) {
        cout << "\nGrade: C" << endl;
    }
    else if (mark >= 33 && mark <= 39) {
        cout << "\nGrade: D" << endl;
    }
    else {
        cout << "\nGrade: Fail" << endl;
    }

    return 0;
}
