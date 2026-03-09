#include <iostream>
using namespace std;

// Function prototypes
int absolute(int n);
int clamp(int val, int lo, int hi);

int main()
{
    int testVals[] = {-15, 0, 25, -3};
    int loVals[] = {-10, -10, -10, 0};
    int hiVals[] = {10, 10, 10, 5};

    cout << "val\tlo\thi\tabsolute\tclamp" << endl;

    for (int i = 0; i < 4; i++)
    {
        int val = testVals[i];
        int lo = loVals[i];
        int hi = hiVals[i];

        cout << val << "\t"
             << lo << "\t"
             << hi << "\t"
             << absolute(val) << "\t\t"
             << clamp(val, lo, hi) << endl;
    }

    return 0;
}

// Absolute value function
int absolute(int n)
{
    return (n >= 0) ? n : -n;
}

// Clamp function
int clamp(int val, int lo, int hi)
{
    return (val < lo) ? lo :
           (val > hi) ? hi :
           val;
}