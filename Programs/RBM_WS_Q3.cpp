//20201205
#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k = 0;
    int MatrixO[100][100];
    int MatrixC[100][100];
    int rO,cO,rC,cC;
    cout<<"Enter the number of rows for Matrix O"<<endl;
    cin>>rO;
    cout<<"Enter the number of columns for Matrix O"<<endl;
    cin>>cO;
    cout<<"Enter the values for Matrix O"<<endl;
    for ( i = 0; i < rO; i++)
    {
        for ( j = 0; j < cO; j++)
        {
            cin>>MatrixO[i][j];
            MatrixC[i][j] = MatrixO[i][j];
        }
        
    }
    // for ( i = 0; i < rO; i++)
    // {
    //     for ( j = 0; j < cO; j++)
    //     {
    //         cout<<MatrixO[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    for ( i = 0; i < rO; i++)
    {
        for ( j = 0; j < cO; j++)
        {
            if(MatrixO[i][j] == 0){
                // int x = i;
                // int y = j;
                for ( k = 0; k < rO; k++)
                {
                    MatrixC[k][j] = 0;
                }
                for ( k = 0; k < cO; k++)
                {
                    MatrixC[i][k] = 0;
                }
                
            }
        }
    }
    for ( i = 0; i < rO; i++)
    {
        for ( j = 0; j < cO; j++)
        {
            cout<<MatrixC[i][j]<<" ";
        }
        cout<<endl;
    }
        // cout<<endl;

    

    
    return 0;
} 