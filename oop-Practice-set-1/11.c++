// Given marks of a student (0–100), print the grade: A (≥90), B (80–89),
//C (70–79), D (60–69), F (below 60).
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade: A";
    }
    else if (marks >= 80 && marks <= 89) {
        cout << "Grade: B";
    }
    else if (marks >= 70 && marks <= 79) {
        cout << "Grade: C";
    }
    else if (marks >= 60 && marks <= 69) {
        cout << "Grade: D";
    }
    else if (marks < 60) {
        cout << "Grade: F";
    }
    else {
        cout << "Enter correct marks";
    }

    return 0;
}
