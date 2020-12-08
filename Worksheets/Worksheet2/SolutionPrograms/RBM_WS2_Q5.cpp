//2020128
#include <bits/stdc++.h>

using namespace std;

void stringSorting(string A[], int n)
{
    int i, j, k = 0;
    string temp;
    char temp2;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j].length() > A[j + 1].length())
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < A[i].length(); j++)
        {
            for (k = 0; k < A[i].length()-j-1 ; k++)
            {
            if (A[i][k] > A[i][k + 1])
            {
                temp2 = A[i][k];
                A[i][k] = A[i][k+1];
                A[i][k+1] = temp2;
            }
                /* code */
            }
            
        }
    }
}

int main()
{
    int i, j = 0;
    int num = 0;
    cout << "Enter the number of words you want to enter" << endl;
    cin >> num;
    string words[num];
    cout<<"Start entering the words"<<endl;
    for (i = 0; i < num; i++)
    {
        cin >> words[i];
    }
    stringSorting(words,num);
    for (i = 0; i < num; i++)
    {
        cout << words[i] << endl;
    }

    return 0;
}