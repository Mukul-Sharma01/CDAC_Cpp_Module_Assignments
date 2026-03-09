#include <iostream>
using namespace std;

class Vector
{
private:
    int *arr;
    int size;

public:

    // Constructor
    Vector(int s)
    {
        size = s;
        arr = new int[size];

        for(int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }

    // Destructor
    ~Vector()
    {
        delete[] arr;
    }

    // Overload [] operator
    int& operator[](int index)
    {
        return arr[index];
    }

    // Overload () operator
    int operator()()
    {
        int sum = 0;

        for(int i = 0; i < size; i++)
        {
            sum += arr[i];
        }

        return sum;
    }
};

int main()
{
    Vector v(5);

    v[0] = 10;
    v[1] = 20;
    v[2] = 50;   // required by assignment
    v[3] = 40;
    v[4] = 30;

    cout << "Vector elements:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << v[i] << " ";
    }

    cout << "\n\nSum of elements using v() : " << v() << endl;

    return 0;
}

/*
Explanation:

operator[]
Allows array-style access to elements.
Example:
v[2] = 50

operator()
Called like a function and used here to compute the sum of all elements.
Example:
cout << v()

Difference:
operator[] accesses individual elements using an index.
operator() performs a function-like operation on the entire object.
*/