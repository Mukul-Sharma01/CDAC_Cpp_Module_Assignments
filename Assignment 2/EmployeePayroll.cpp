#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int empID;
    string empName;
    double empSalary;
    double grossSalary;

public:
    // Setter functions
    void setEmpID(int id)
    {
        empID = id;
    }

    void setEmpName(string name)
    {
        empName = name;
    }

    void setEmpSalary(double salary)
    {
        empSalary = salary;
    }

    // Getter functions
    int getEmpID()
    {
        return empID;
    }

    string getEmpName()
    {
        return empName;
    }

    double getEmpSalary()
    {
        return empSalary;
    }

    double getGrossSalary()
    {
        return grossSalary;
    }

    // Function to calculate gross salary
    void calculateGrossSalary()
    {
        if (empSalary <= 5000)
            grossSalary = empSalary + empSalary * 0.10;

        else if (empSalary <= 10000)
            grossSalary = empSalary + empSalary * 0.15;

        else
            grossSalary = empSalary + empSalary * 0.20;
    }

    // Display employee details
    void displayEmployeeDetails()
    {
        cout << "\nEmployee Details\n";
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Salary: " << empSalary << endl;
        cout << "Gross Salary: " << grossSalary << endl;
    }
};

int main()
{
    Employee emp;
    int choice;
    int id;
    string name;
    double salary;

    do
    {
        cout << "\n----- Employee Payroll Menu -----\n";
        cout << "1. Add New Employee\n";
        cout << "2. Calculate Gross Salary\n";
        cout << "3. Display Employee Details\n";
        cout << "4. Update Employee Information\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Employee ID: ";
            cin >> id;

            cout << "Enter Employee Name: ";
            cin.ignore();
            getline(cin, name);

            cout << "Enter Salary: ";
            cin >> salary;

            emp.setEmpID(id);
            emp.setEmpName(name);
            emp.setEmpSalary(salary);

            cout << "Employee added successfully.\n";
            break;

        case 2:
            emp.calculateGrossSalary();
            cout << "Gross salary calculated.\n";
            break;

        case 3:
            emp.displayEmployeeDetails();
            break;

        case 4:
            cout << "Enter new name: ";
            cin >> name;

            cout << "Enter new salary: ";
            cin >> salary;

            emp.setEmpName(name);
            emp.setEmpSalary(salary);

            cout << "Employee information updated.\n";
            break;

        case 5:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}