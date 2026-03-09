#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    // Default constructor
    Student()
    {
        rollNo = 0;
        name = "Not Assigned";
        marks = 0;
    }

    // Parameterized constructor
    Student(int r, string n, float m)
    {
        rollNo = r;
        name = n;
        marks = m;
    }

    // Constructor using this pointer
    Student(int rollNo, string name)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = 0;
    }

    // Function to display Student details
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << endl;
    }
};

int main()
{
    // Object using default constructor
    Student s1;

    // Objects using parameterized constructor
    Student s2(101, "Mukul", 85.5);
    Student s3(102, "Mradul", 90);

    cout << "Student created using default constructor:\n";
    s1.display();

    cout << "Student created using parameterized constructor:\n";
    s2.display();
    s3.display();

    return 0;
}

/*
Q5.2:

1. When does compiler generate a default constructor?
If no constructor is defined in the class, the compiler automatically generates
a default constructor.

2. When does it NOT generate one?
If the programmer defines any constructor (like a parameterized constructor),
the compiler will not generate a default constructor automatically.

3. Can constructors be overloaded?
Yes. Constructors can be overloaded by creating multiple constructors with
different parameter lists.
*/