//20201205
#include <bits/stdc++.h>

using namespace std;

void printEquiv(int A[], int n)
{
    int i = 0;
    for (i = n - 1; i >= 0; i--)
    {

        cout << A[i];
    }
}

void convertTo(int A[], int num, int div)
{
    int i = 0;
    for (i = 0; num; i++)
    {
        A[i] = num % div;
        num = num / div;
    }
    printEquiv(A, i);
}

int main()
{
    long long int num = 0;
    cout << "Enter the number whose binary Binary,Octal and Hexadecimal equivalents you wish to find" << endl;
    cin >> num;
    int binaryArr[1000];
    int octalArr[1000];
    int hexadecimalArr[1000];
    //------------------------//
    cout << "Binary equivalent of " << num << " is " << endl;
    convertTo(binaryArr, num, 2);
    cout << endl;
    cout << "Octal equivalent of " << num << " is " << endl;
    convertTo(octalArr, num, 8);
    cout << endl;
    cout << "Hexadecimal equivalent of " << num << " is " << endl;
    convertTo(hexadecimalArr, num, 16);

    return 0;
}