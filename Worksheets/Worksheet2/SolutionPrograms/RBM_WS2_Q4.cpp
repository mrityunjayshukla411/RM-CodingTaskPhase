//20201208
#include <bits/stdc++.h>

using namespace std;

// int** makeMatrix(int **Matrix,int row,int col){
//     int i,j = 0;
//     int **Matrix = new int *[row];
//     for (i = 0; i < row; i++)
//     {
//         Matrix[i] = new int[col];
//     }
//     return Matrix;
// }

int **transposeMatrix(int **A, int row, int col)
{
    int i, j, k = 0;
    int **tranpM = new int *[col];
    for (i = 0; i < col; i++)
    {
        tranpM[i] = new int[row];
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            tranpM[j][i] = A[i][j];
        }
    }
    return tranpM;
}

int **matrixMultiplication(int **A, int **B, int **C, int rA, int cA, int rB, int cB)
{
    int i, j, k = 0;

    // for (i = 0; i < rA; i++)
    // {
    //     for (j = 0; j < cB; j++)
    //     {
    //         *(*(C + i) + j) = 0;
    //     }
    // }

    for (i = 0; i < rA; i++)
    {
        for (j = 0; j < cB; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < cA; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    return C;
}

void printMatrix(int **Matrix, int R, int C)
{
    int i, j;

    for (i = 0; i < R; i++)
    {
        for (j = 0; j < C; j++)
        {
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int i, j, k = 0;
    int rA, cA, rB, cB;
    cout << "Enter the number of rows for Matrix A" << endl;
    cin >> rA;
    cout << "Enter the number of columns for Matrix A" << endl;
    cin >> cA;
    cout << "Enter the number of rows for Matrix B" << endl;
    cin >> rB;
    cout << "Enter the number of columns for Matrix B" << endl;
    cin >> cB;

    int **MatrixA = new int *[rA];
    for (i = 0; i < rA; i++)
    {
        MatrixA[i] = new int[cA];
    }
    int **MatrixB = new int *[rB];
    for (i = 0; i < rB; i++)
    {
        MatrixB[i] = new int[cB];
    }
    int **MatrixC = new int *[rA];
    for (i = 0; i < rA; i++)
    {
        MatrixC[i] = new int[cB];
    }
    int **MatrixD = new int *[cA];
    for (i = 0; i < cA; i++)
    {
        MatrixD[i] = new int[rB];
    }
    if (cA == rB)
    {
        cout << "Enter the values of Matrix A" << endl;
        for (i = 0; i < rA; i++)
        {
            for (j = 0; j < cA; j++)
            {
                cin >> MatrixA[i][j];
            }
        }
        cout << "Enter the values of Matrix B" << endl;
        for (i = 0; i < rB; i++)
        {
            for (j = 0; j < cB; j++)
            {
                cin >> MatrixB[i][j];
            }
        }
        MatrixC = matrixMultiplication(MatrixA, MatrixB, MatrixC, rA, cA, rB, cB);
        cout<<"Product of Matrix A and Matrix B = "<<endl;
        printMatrix(MatrixC, rA, cB);
    int **MatrixT = transposeMatrix(MatrixA, rA, cA);
    cout<<"Transpose of Matrix A = "<<endl;
    printMatrix(MatrixT, cA, rA);
    cout << "Now verifying the Identity (A*B)' = B'* A' using the previously entered matrices" << endl;
    int **MatrixTA = transposeMatrix(MatrixA, rA, cA);
    int **MatrixTB = transposeMatrix(MatrixB, rB, cB);
    int **MatrixTC = transposeMatrix(MatrixC, rA, cB);
    MatrixD = matrixMultiplication(MatrixTB, MatrixTA, MatrixD, cB, rB, cA, rA);
    cout<<"B' * A' = "<<endl;
    printMatrix(MatrixD, cB, rA);
    cout<<"(A*B)' = "<<endl;
    printMatrix(MatrixTC, cB, rA);
    bool check = false;
    for (i = 0; i < cB; i++)
    {
        for (j = 0; j < rA; j++)
        {
            if (MatrixD[i][j] == MatrixTC[i][j])
            {
                check = true;
            }
            else
            {
                check = false;
            }
        }
    }
    if (check == true)
    {
        /* code */
        cout << "Hence Proved" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    }
    else
    {
        cout << "These matrices cannot be multiplied" << endl;
    }
    // for (i = 0; i < rA; i++)
    // {
    //     delete[] MatrixA[i];
    // }
    // delete[] MatrixA;
    // for (i = 0; i < rB; i++)
    // {
    //     delete[] MatrixB[i];
    // }
    // delete[] MatrixB;
    return 0;
}