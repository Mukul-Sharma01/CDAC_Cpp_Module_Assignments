#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    mutable int accessCount;

public:
    Employee(int i, string n)
    {
        id = i;
        name = n;
        accessCount = 0;
    }

    // Copy constructor (user-defined)
    Employee(const Employee &e)
    {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;
        cout << "Copy constructor called\n";
    }

    // const member function
    void display() const
    {
        accessCount++;
        cout << "ID: " << id << " Name: " << name << endl;
        cout << "Access count: " << accessCount << endl;
    }
};

int main()
{
    Employee e1(101, "Mukul");

    e1.display();
    e1.display();
    e1.display();

    cout << "\nCopying object...\n";

    Employee e2 = e1;

    e2.display();

    return 0;
}

/*
Explanation:

Shallow Copy
Copies object member values directly (same memory references).

Deep Copy
Creates new memory and copies data separately.

Default Copy Constructor
Automatically created by compiler if not defined.

User Defined Copy Constructor
Programmer defines how copying should occur.

Why display() must be const?
Because it should not modify object data except mutable members.

Why accessCount is mutable?
Mutable allows modification even inside const functions.
*/