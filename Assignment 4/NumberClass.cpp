#include <iostream>
using namespace std;

class Inspector;   

class Number
{
private:
    int value;

public:

    Number(int v = 0)
    {
        value = v;
    }

    Number& operator=(const Number &n)
    {
        value = n.value;
        return *this;
    }

    Number& operator++()
    {
        ++value;
        return *this;
    }

    Number operator++(int)
    {
        Number temp = *this;
        value++;
        return temp;
    }

    friend bool operator>(const Number &a, const Number &b);

    // Friend class
    friend class Inspector;
};

// Friend comparison function
bool operator>(const Number &a, const Number &b)
{
    return a.value > b.value;
}

// Friend class
class Inspector
{
public:
    void show(Number n)
    {
        cout << "Private value = " << n.value << endl;
    }
};

int main()
{
    Number n1(10), n2(20);

    cout << "Original values\n";
    Inspector I;
    I.show(n1);
    I.show(n2);

    // Pre increment
    ++n1;
    cout << "\nAfter pre-increment (++n1)\n";
    I.show(n1);

    // Post increment
    n1++;
    cout << "\nAfter post-increment (n1++)\n";
    I.show(n1);

    // Assignment operator
    n2 = n1;
    cout << "\nAfter assignment n2 = n1\n";
    I.show(n2);

    // Comparison
    if(n1 > n2)
        cout << "\nn1 is greater\n";
    else
        cout << "\nn2 is greater or equal\n";

    return 0;
}