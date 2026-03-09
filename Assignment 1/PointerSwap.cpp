#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    int z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    cout << "Before Swap:" << endl;
    cout << "x = " << *px << endl;
    cout << "y = " << *py << endl;
    cout << "z = " << *pz << endl;

    // Swapping x and z 
    int temp = *px;
    *px = *pz;
    *pz = temp;

    cout << "\nAfter Swap:" << endl;
    cout << "x = " << *px << endl;
    cout << "y = " << *py << endl;
    cout << "z = " << *pz << endl;

    cout << "\nAddresses stored in pointers:" << endl;
    cout << "px = " << px << endl;
    cout << "py = " << py << endl;
    cout << "pz = " << pz << endl;

    return 0;
}