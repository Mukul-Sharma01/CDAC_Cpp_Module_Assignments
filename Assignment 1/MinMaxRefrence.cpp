#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal);

int main() {
    int x = 10, y = 25, z = 5;
    int lo, hi;

    findMinMax(x, y, z, lo, hi);

    cout << "Minimum value: " << lo << endl;
    cout << "Maximum value: " << hi << endl;

    return 0;
}

void findMinMax(int a, int b, int c, int &minVal, int &maxVal) {

    // Finding minimum
    minVal = a;
    if (b < minVal)
        minVal = b;
    if (c < minVal)
        minVal = c;

    // Finding maximum
    maxVal = a;
    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;
}