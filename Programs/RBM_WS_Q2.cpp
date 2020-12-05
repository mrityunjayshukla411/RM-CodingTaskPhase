//20201204
#include<bits/stdc++.h>

using namespace std;

// I tried writing a function for inputting the Matrix but int A[][] is not a valid paramater - Problem Faced 1
// void inputMatrix(int Arr[][],int row,int col){
//     int i,j = 0;
//     for ( i = 0; i < row; i++)
//     {
//         for (j = 0; j < col; j++)
//         {
//             cin>>Arr[i][j];
//         }
        
//     }
// }

int main(){
    int i,j,k = 0;
    int MatrixA[100][100];
    int MatrixB[100][100];
    int MatrixC[100][100];
    int rA,cA,rB,cB;
    cout<<"Enter the number of rows for Matrix A"<<endl;
    cin>>rA;
    cout<<"Enter the number of columns for Matrix A"<<endl;
    cin>>cA;
    cout<<"Enter the number of rows for Matrix B"<<endl;
    cin>>rB;
    cout<<"Enter the number of columns for Matrix B"<<endl;
    cin>>cB;
    // for ( i = 0; i < rA; i++)
    // {
    //     for (j = 0; j < cA; j++)
    //     {
    //         cout<<MatrixA[i][j];
    //     }
        
    // }
    if(cA == rB){
    cout<<"Enter the values of Matrix A"<<endl;
    for ( i = 0; i < rA; i++)
    {
        for (j = 0; j < cA; j++)
        {
            cin>>MatrixA[i][j];
        }
        
    }
    cout<<"Enter the values of Matrix B"<<endl;
    for ( i = 0; i < rB; i++)
    {
        for (j = 0; j < cB; j++)
        {
            cin>>MatrixB[i][j];
        }
        
    }

    for (i = 0; i < rB; i++)
    {
        for ( j = 0; j < cA ; j++)
        {
            for ( k = 0; k < cA; k++)
            {
                MatrixC[i][j] += MatrixA[i][k]* MatrixB[k][j];
            }
            
        }
        
    }
    cout<<"The Product Matric is"<<endl;
    for ( i = 0; i < rA; i++)
    {
        for (j = 0; j < cB; j++)
        {
            cout<<MatrixC[i][j]<<" ";
        }
        cout<<endl;
        
    }
    }
    else
    {
        cout<<"These matrices cannot be multiplied"<<endl;
    }
    
    

    
    return 0;

}