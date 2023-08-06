#include <iostream>
#include <iomanip>
using namespace std;

void matrix(int m[10][10], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> m[i][j];
        }
    }
}

int main()
{
    int row, col, m[10][10];
    cout << "Enter the value of column and row: ";
    cin >> col >> row;

    matrix(m, row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
