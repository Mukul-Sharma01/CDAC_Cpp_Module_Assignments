#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    char *str;

public:

    // Constructor
    String(const char *s = "")
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy constructor (deep copy)
    String(const String &s)
    {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Assignment operator
    String& operator=(const String &s)
    {
        if(this != &s)
        {
            delete[] str;
            str = new char[strlen(s.str) + 1];
            strcpy(str, s.str);
        }
        return *this;
    }

    // Concatenation operator
    String operator+(const String &s)
    {
        char *temp = new char[strlen(str) + strlen(s.str) + 1];

        strcpy(temp, str);
        strcat(temp, s.str);

        String result(temp);

        delete[] temp;
        return result;
    }

    // Input operator
    friend istream& operator>>(istream &in, String &s)
    {
        char temp[100];
        in >> temp;

        delete[] s.str;
        s.str = new char[strlen(temp) + 1];
        strcpy(s.str, temp);

        return in;
    }

    // Output operator
    friend ostream& operator<<(ostream &out, const String &s)
    {
        out << s.str;
        return out;
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }
};

int main()
{
    String s1, s2, s3;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    s3 = s1 + s2;

    cout << "\nString 1: " << s1 << endl;
    cout << "String 2: " << s2 << endl;
    cout << "Concatenated String: " << s3 << endl;

    return 0;
}