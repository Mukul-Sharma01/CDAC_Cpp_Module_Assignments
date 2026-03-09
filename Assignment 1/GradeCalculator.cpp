#include <iostream>
using namespace std;

int main(){
    float s1, s2, s3 ,s4, s5;
    cout << "Enter 1st Subject Marks: ";
    cin >> s1;
    cout << "Enter 2nd Subject Marks: ";
    cin >> s2;
    cout << "Enter 3rd Subject Marks: ";
    cin >> s3;
    cout << "Enter 4th Subject Marks: ";
    cin >> s4;
    cout << "Enter 5th Subject Marks: ";
    cin >> s5;

    float total = s1 + s2 + s3 + s4 + s5;

    float percentage = (total / 500) * 100;

    char grade = (percentage >= 75) ? 'A':
                (percentage >= 60) ? 'B':
                (percentage >= 45) ? 'C':'F';

    cout << "Marks in each Subject: " << endl;
    cout << "Subject 1 = " << s1 << endl;
    cout << "Subject 2 = " << s2 << endl;
    cout << "Subject 3 = " << s3 << endl;
    cout << "Subject 4 = " << s4 << endl;
    cout << "Subject 5 = " << s5 << endl;

    cout << "Total Marks Obtained: " << total << endl;

    cout << "Percentage Achieved: " << percentage << endl;

    cout << "Grade Recieved: " << grade << endl;

    return 0;

}