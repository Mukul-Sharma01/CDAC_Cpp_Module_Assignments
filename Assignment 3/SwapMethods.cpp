#include <iostream>
using namespace std;

// Swap by value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Swap by address 
void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Swap by reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Original values: x = " << x << ", y = " << y << endl;

    swapByValue(x, y);
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;

    swapByAddress(&x, &y);
    cout << "After swapByAddress: x = " << x << ", y = " << y << endl;

    swapByReference(x, y);
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;

    return 0;
}

/*
Q2.2:

Reference variables act as aliases for existing variables. 
This means the reference variable refers to the same memory location as the 
original variable.

In swapByReference(), parameters a and b are references to the original 
variables x and y. Therefore, any changes made to a and b inside the function 
directly modify x and y in main().

This is why swapByReference() successfully swaps the values.
*/