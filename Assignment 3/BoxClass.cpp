#include <iostream>
using namespace std;

class Box
{
private:
    int length;
    int width;
    int height;

public:
    // Parameterized constructor
    Box(int l, int w, int h)
    {
        length = l;
        width = w;
        height = h;
    }

    // Setting Dimensions using this pointer
    void setDimensions(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }

    // calculate volume
    int volume()
    {
        return length * width * height;
    }

    // display dimensions
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
    }
};

int main()
{
    // Initialization using constructor
    Box b1(2, 3, 4);

    cout << "Box dimensions using constructor:\n";
    b1.display();
    cout << "Volume: " << b1.volume() << endl;

    // Assignment using setDimensions
    b1.setDimensions(5, 6, 7);

    cout << "\nAfter using setDimensions:\n";
    b1.display();
    cout << "Volume: " << b1.volume() << endl;

    return 0;
}

/*
Q1.2:

1. Why must initialization happen before assignment?

Initialization happens when an object is created. Constructors initialize the 
member variables immediately when memory is allocated. Assignment happens later 
after initialization.

2. When is initialization preferred over assignment?

Initialization is preferred when using const members, reference members,
initializer lists, or when better performance is required.
*/