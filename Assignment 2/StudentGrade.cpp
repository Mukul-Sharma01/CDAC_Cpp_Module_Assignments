#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;
    char grade;

public:
    // Setter functions
    void setName(string n)
    {
        name = n;
    }

    void setRollNumber(int r)
    {
        rollNumber = r;
    }

    void setMarks(float m)
    {
        marks = m;
    }

    // Getter functions
    string getName()
    {
        return name;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    float getMarks()
    {
        return marks;
    }

    char getGrade()
    {
        return grade;
    }

    // Function to calculate grade
    void calculateGrade()
    {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else
            grade = 'F';
    }

    // Display function
    void displayInfo()
    {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Student s;
    int choice;
    string name;
    int roll;
    float marks;

    do
    {
        cout << "\n----- Student Menu -----\n";
        cout << "1. Accept Information\n";
        cout << "2. Display Information\n";
        cout << "3. Calculate Grade\n";
        cout << "4. Exit Program\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:

            cin.ignore();
            cout << "Enter name: ";
            getline(cin, name);

            cout << "Enter roll number: ";
            cin >> roll;

            cout << "Enter marks: ";
            cin >> marks;

            s.setName(name);
            s.setRollNumber(roll);
            s.setMarks(marks);
            break;

        case 2:
            s.displayInfo();
            break;

        case 3:
            s.calculateGrade();
            cout << "Grade calculated successfully.\n";
            break;

        case 4:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}