#include <iostream>
using namespace std;

int main()
{
    int num = 10;

    // Pointer to the variable
    int *ptr = &num;

    // Reference to the variable
    int &ref = num;

    cout << "Initial value of num: " << num << endl;

    // Modify using pointer
    *ptr = 20;
    cout << "After modifying using pointer: " << num << endl;

    // Modify using reference
    ref = 30;
    cout << "After modifying using reference: " << num << endl;

    return 0;
}

/*
Q3.2:

1. Two differences between pointer and reference:
   - A pointer stores the memory address of a variable and must be dereferenced using * to access the value.
   - A reference is an alias for an existing variable and does not require dereferencing.

2. Why references cannot be reseated but pointers can:
   - A reference must refer to the same variable once initialized.
   - A pointer can be changed to point to different variables.

3. Why references cannot be NULL:
   - A reference must always refer to a valid object.
   - A pointer can store NULL (no address), but a reference must always point to something.
*/