//20201204
#include<bits/stdc++.h>

using namespace std;

void printArray(string A,int n){
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }
    
}

void bubbleSort(string &A,int n){
    int i,j,temp = 0;
    for ( i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
        
    }
    

}

int main(){
    int i = 0;
    string A;
    cout<<"Enter a string"<<endl;
    cin>>A;
    int n = A.length();
    bubbleSort(A,n);
    printArray(A,n);
    

    return 0;
}