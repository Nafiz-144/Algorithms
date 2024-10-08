#include <iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int matrix1[][10], int matrix2[][10], int result[][10], int row1, int col1, int row2, int col2)
{
    // Initialize the result matrix to 0
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][10], int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row1, col1, row2, col2;

    // Input dimensions
    cout << "Enter the number of rows and columns for the first matrix: ";
    cin >> row1 >> col1;
    cout << "Enter the number of rows and columns for the second matrix: ";
    cin >> row2 >> col2;

    // Check if multiplication is possible
    if (col1 != row2)
    {
        cout << "Matrix multiplication is not possible." << endl;
        return 0;
    }

    int matrix1[10][10], matrix2[10][10], result[10][10];

    // Input matrix1
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> matrix1[i][j];
        }
    }

    // Input matrix2
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            cin >> matrix2[i][j];
        }
    }

    // Call the function to multiply matrices
    multiplyMatrices(matrix1, matrix2, result, row1, col1, row2, col2);

    // Display the result
    cout << "The result of matrix multiplication is:" << endl;
    displayMatrix(result, row1, col2);

    return 0;
}
