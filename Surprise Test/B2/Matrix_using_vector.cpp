#include <iostream>
#include <vector>
using namespace std;

// Function to accept a matrix
void AcceptMatrix(vector<vector<int>> &matrix, int rows, int cols)
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

// Function to display a matrix
void DisplayMatrix(const vector<vector<int>> &matrix, int rows, int cols)
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

// Function to transpose a matrix
vector<vector<int>> TransposeMatrix(const vector<vector<int>> &matrix, int rows, int cols)
{
    vector<vector<int>> transpose(cols, vector<int>(rows));
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    return transpose;
}

// Function to add two matrices
vector<vector<int>> AddMatrix(const vector<vector<int>> &matrix1, const vector<vector<int>> &matrix2, int rows, int cols)
{
    vector<vector<int>> matrix3(rows, vector<int>(cols));
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

    // Create matrix and initialize vectors
    vector<vector<int>> matrix(rows, vector<int>(cols));

    // Accept and display the original matrix
    AcceptMatrix(matrix, rows, cols);
    cout << "Original Matrix:\n";
    DisplayMatrix(matrix, rows, cols);

    // Transpose the matrix and display it
    vector<vector<int>> transpose = TransposeMatrix(matrix, rows, cols);
    cout << "Transpose Matrix:\n";
    DisplayMatrix(transpose, cols, rows);

    // Check if matrix is square to add matrix and its transpose
    if (rows == cols)
    {
        vector<vector<int>> add = AddMatrix(matrix, transpose, rows, cols);
        cout << "Matrix + Transpose:\n";
        DisplayMatrix(add, rows, cols);
    }
    else
    {
        cout << "Addition of matrix and its transpose is not possible for non-square matrices.\n";
    }

    return 0;
}
