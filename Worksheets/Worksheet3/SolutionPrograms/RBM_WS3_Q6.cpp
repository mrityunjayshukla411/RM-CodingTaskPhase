#include<bits/stdc++.h>

using namespace std;

void printArray(int *A, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void recursiveBubbleSort(int *A,int size){
    int i, j, temp = 0;
    for (i = 0; i < size; i++)
    {
            if (A[i] > A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        recursiveBubbleSort(A,size-1);
        
    }
}

int main(){
    int i, j,n = 0;
    cout << "Enter the size of array you want to create" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    recursiveBubbleSort(arr,n);
    cout<<"Sorted array"<<endl;
    printArray(arr,n);


    return 0;
}