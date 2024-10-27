#include <iostream>
using namespace std;

void AcceptMatrix(int **matrix, int rows, int cols)
{
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cin >> matrix[i][j];
        }
    }
}

void DisplayMatrix(int **matrix, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void TransposeMatrix(int **matrix, int **transpose, int rows, int cols)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int **AddMatrix(int **matrix1, int **matrix2, int rows, int cols)
{
    int **matrix3 = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix3[i] = new int[cols];
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return matrix3;
}

int main()
{
    int rows, cols;

    cout << "Enter number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    int **matrix = new int *[rows];
    for (int i = 0; i < rows; ++i)
    {
        matrix[i] = new int[cols];
    }

    int **transpose = new int *[cols];
    for (int i = 0; i < cols; ++i)
    {
        transpose[i] = new int[rows];
    }

    AcceptMatrix(matrix, rows, cols);
    cout << "Original Matrix:\n";
    DisplayMatrix(matrix, rows, cols);

    TransposeMatrix(matrix, transpose, rows, cols);
    cout << "Transpose Matrix:\n";
    DisplayMatrix(transpose, cols, rows);

    int **add = AddMatrix(matrix, transpose, rows, cols);
    DisplayMatrix(add, rows, cols);





    for (int i = 0; i < rows; ++i)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    for (int i = 0; i < cols; ++i)
    {
        delete[] transpose[i];
    }
    delete[] transpose;

    for (int i = 0; i < cols; ++i)
    {
        delete[] add[i];
    }
    delete[] add;

    return 0;
}
