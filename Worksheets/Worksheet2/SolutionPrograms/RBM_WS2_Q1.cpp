//20201207
#include <bits/stdc++.h>

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
void buubleSort(int *A, int n)
{
    int i, j, temp = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
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
int binarySearch(int *A, int n, int value)
{
    int i, high, low, mid = 0;
    low = 0;
    high = n - 1;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (A[mid] == value)
        {
            return mid;
        }
        if (A[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int i, j, k, n, value = 0;
    char choice;
    cout << "Enter the size of array you want to create" << endl;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the type of sorting algorithm you want to use 's' for selection sort and 'b' for bubblesort" << endl;
    cin >> choice;
    cout << "Enter the value who's position you wish to find in the sorted array" << endl;
    cin >> value;
    if (choice == 's')
    {
        selectionSort(arr, n);
    }
    else
    {
        if (choice == 'b')
        {
            buubleSort(arr, n);
        }
        else
        {
            cout << "Invalid choice please adhere to the rules";
        }
    }
    cout << "Sorted Array" << endl;
    printArray(arr, n);
    if (binarySearch(arr, n, value) != -1)
    {
        cout << "The position(starts from 0) of the value you entered in the array is " << binarySearch(arr, n, value) << endl;
    }
    else
    {
        cout << "The value you entered is not in the array";
    }
    return 0;
}