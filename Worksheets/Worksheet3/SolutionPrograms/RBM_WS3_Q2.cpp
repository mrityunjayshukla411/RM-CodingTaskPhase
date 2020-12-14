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

void selectionSort(int *A, int n)
{
    int i, j, temp, pos, low = 0;
    for (i = 0; i < n; i++)
    {

        low = A[i];
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (A[j] < low)
            {
                low = A[j];
                pos = j;
            }
        }
        temp = A[i];
        A[i] = A[pos];
        A[pos] = temp;
    }
}

int recursiveBinarySearch(int *A,int start,int end,int value){
    if(end >= 1){

    int mid = start + (end-1)/2;
    if (A[mid] == value)
    {
        return mid;
    }
    if (A[mid]<value)
    {
        return recursiveBinarySearch(A,mid+1,end,value);
    }
    if (A[mid]>value)
    {
        return recursiveBinarySearch(A,start,mid-1,value);
    }
    }
    return -1;
}

int main(){
    int i, j, k, n, value = 0;
    cout << "Enter the size of array you want to create" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value who's position you wish to find in the sorted array" << endl;
    cin >> value;
    selectionSort(arr,n);
    printArray(arr,n);
    if (recursiveBinarySearch(arr,0, n,value) != -1)
    {
        cout << "The position(starts from 0) of the value you entered in the array is " << recursiveBinarySearch(arr,0, n,value) << endl;
    }
    else
    {
        cout << "The value you entered is not in the array";
    }
    return 0;
}