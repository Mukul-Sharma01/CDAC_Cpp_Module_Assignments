#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    // allocating memory using malloc
    int *arr = (int*) malloc(5 * sizeof(int));

    cout << "Enter 5 integers seperated by space or each one in new line:\n";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "You entered:\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // free memory
    free(arr);

    return 0;
}

/*
Q4.3:

1. Why constructors are not called when using malloc?
malloc only allocates raw memory and does not know about C++ objects.
Therefore constructors are not executed.

2. Why new is preferred in C++?
new allocates memory and also calls constructors for objects.
It is type-safe and does not require casting.

3. Difference in return types and initialization
new returns a properly typed pointer and can initialize objects.
malloc returns void* and requires explicit casting.

4. Why malloc cannot initialize complex types?
malloc only allocates raw memory and does not execute constructors.
Complex objects require constructors for proper initialization.
*/