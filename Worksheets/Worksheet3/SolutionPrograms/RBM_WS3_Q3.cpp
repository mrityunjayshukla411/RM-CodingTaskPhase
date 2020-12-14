#include <bits/stdc++.h>

using namespace std;

int multiply(int x, int arr[], int arr_size)
{
    int carry = 0;
    for (int i = 0; i < arr_size; i++)
    {
        int product = (arr[i] * x) + carry;
        arr[i] = product % 10;
        carry = product / 10;
    }
    while (carry)
    {
        arr[arr_size] = carry % 10;
        carry = carry / 10;
        arr_size++;
    }
    return arr_size;
}

void factorial(int n)
{
    int arr[500] = {1};
    int arr_size = 1;
    int cntr = 0;
    for (int i = 2; i <= n; i++)
    {
        arr_size = multiply(i, arr, arr_size);
    }
    for (int i = arr_size - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}
int main()
{

    int T;
    int r;
    cout<<"Enter the number of testcases you want to check "<<endl;
    cin >> T;
    r = T;
    int arr[100];
    cout<<"Now enter the number whose factorials you wish to find"<<endl;
    while (T != 0)
    {
        int n;
        cin >> n;
        arr[T] = n;
        T--;
    }
    for (int i = r; i > 0; i--)
    {
        factorial(arr[i]);
        cout<<endl;
    }

    return 0;
}