#include <iostream>
using namespace std;

class Matrix
{
private:
    int rows, cols;
    int **data;

public:

    // Constructor
    Matrix(int r = 2, int c = 2)
    {
        rows = r;
        cols = c;

        data = new int*[rows];
        for(int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }
    }

    // Copy constructor (important for dynamic memory)
    Matrix(const Matrix &m)
    {
        rows = m.rows;
        cols = m.cols;

        data = new int*[rows];
        for(int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
            for(int j = 0; j < cols; j++)
            {
                data[i][j] = m.data[i][j];
            }
        }
    }

    // Destructor
    ~Matrix()
    {
        for(int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }
        delete[] data;
    }

    // Input operator
    friend istream& operator>>(istream &in, Matrix &m)
    {
        cout << "Enter matrix (" << m.rows << "x" << m.cols << "):\n";

        for(int i = 0; i < m.rows; i++)
        {
            for(int j = 0; j < m.cols; j++)
            {
                in >> m.data[i][j];
            }
        }

        return in;
    }

    // Output operator
    friend ostream& operator<<(ostream &out, const Matrix &m)
    {
        for(int i = 0; i < m.rows; i++)
        {
            for(int j = 0; j < m.cols; j++)
            {
                out << m.data[i][j] << " ";
            }
            out << endl;
        }

        return out;
    }

    // Matrix addition
    Matrix operator+(const Matrix &m)
    {
        Matrix result(rows, cols);

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                result.data[i][j] = data[i][j] + m.data[i][j];
            }
        }

        return result;
    }

    // Matrix comparison
    bool operator==(const Matrix &m)
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(data[i][j] != m.data[i][j])
                    return false;
            }
        }

        return true;
    }
};

int main()
{
    Matrix m1(2,2), m2(2,2);

    cin >> m1 >> m2;

    cout << "\nMatrix 1:\n" << m1;
    cout << "\nMatrix 2:\n" << m2;

    Matrix m3 = m1 + m2;

    cout << "\nMatrix Addition (m1 + m2):\n";
    cout << m3;

    if(m1 == m2)
        cout << "\nMatrices are equal\n";
    else
        cout << "\nMatrices are NOT equal\n";

    return 0;
}