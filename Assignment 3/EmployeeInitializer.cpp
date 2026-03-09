#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    const int employeeId;
    string name;
    float salary;

public:
    // Constructor using initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s)
    {
    }

    // Function to display employee details
    void display()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << endl;
    }
};

int main()
{
    Employee e1(101, "Mukul", 45000);
    Employee e2(102, "Mayur", 52000);

    e1.display();
    e2.display();

    return 0;
}

/*
Q6.3:

1. Why must const members be initialized in initializer list?
Const variables cannot be modified after they are created. Therefore they must be
initialized at the time of object creation using an initializer list.

2. What happens if you try to assign the value of a const member inside constructor body?
The compiler will give an error because const members cannot be assigned a value
after initialization.

3. Why is initializer list faster than assignment?
Initializer lists directly initialize variables when the object is created.
Assignment first creates the object and then assigns values, which is less efficient.
*/