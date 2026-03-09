#include <iostream>
using namespace std;

int main()
{
    // allocating memory for 5 integers
    int *arr = new int[5];

    cout << "Enter 5 integers separated by space or each integer in new line:\n";

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

    // deallocate memory
    delete[] arr;

    return 0;
}