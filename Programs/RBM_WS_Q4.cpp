//20201205
#include <bits/stdc++.h>

using namespace std;

void HillNumDetection(int A[], int n)
{
    bool low = false;
    bool high = false;
    int i, j, max = 0;
    int x = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
            x = i;
        }
    }
    for (i = 0; i < x; i++)
    {
        if (A[i] < A[i + 1] && A[i] != A[i+1])
        {
            low = true;
        }
        else
        {
            low = false;
            i = n;
        }
    }
    for (i = x; i < n-1; i++)
    {
        if (A[i] > A[i + 1] && A[i] != A[i+1]) 
        {
            high = true;
        }
        else
        {
            high = false;
            i = n;
        }
    }
    if (high && low)
    {
        cout << "Hill Number Test Passed";
    }
    else
    {
        cout << "Hill Number Test Failed";
    }

}
int main()
{
    int i, j, k, n, temp = 0;
    string num;
    cout << "Enter the Number you want to test" << endl;
    cin >> num;
    int len = num.length();
    int Hill_num[len];
    for (i = 0; i < len; i++)
    {
        Hill_num[i] = int(num[i]) - '0';
    }
    HillNumDetection(Hill_num, len);

    return 0;
}