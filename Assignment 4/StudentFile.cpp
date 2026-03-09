#include <iostream>
#include <fstream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float marks;

public:
    // Parameterized constructor
    Student(int r = 0, string n = "", float m = 0)
    {
        roll = r;
        name = n;
        marks = m;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destroying student " << name << endl;
    }

    void writeToFile(ofstream &fout)
    {
        fout << roll << " " << name << " " << marks << endl;
    }
};

int main()
{
    Student s[3] = {
        Student(1, "Mukul", 90),
        Student(2, "Mayur", 85),
        Student(3, "Mradul", 88)
    };

    ofstream fout("students.txt");

    for (int i = 0; i < 3; i++)
    {
        s[i].writeToFile(fout);
    }

    fout.close();

    cout << "\nReading from file:\n";

    ifstream fin("students.txt");

    int roll;
    string name;
    float marks;

    while (fin >> roll >> name >> marks)
    {
        cout << roll << " " << name << " " << marks << endl;
    }

    fin.close();

    return 0;
}

/*
Explanation:

Constructor Call Sequence:
When array of objects is created, constructors are called in order.

Example:
Student s[3]
Constructor order → s[0], s[1], s[2]

Destructor Call Sequence:
Destructors are called in reverse order when program ends.

Destructor order → s[2], s[1], s[0]
*/