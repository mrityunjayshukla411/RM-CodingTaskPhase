//20201205
#include<bits/stdc++.h>

using namespace std;

int divisorsum(int n){
    int i,sum = 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
}
    return sum;
}

int main(){
    int i,j,k,num1,num2 = 0;
    int divisorsSum1 = 1,divisorsSum2 = 1;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    divisorsSum1 = divisorsum(num1);
    divisorsSum2 = divisorsum(num2);
    if (divisorsSum1 == num2 && divisorsSum2 == num1)
    {
        cout<<"Amicable Number test Passed";
    }
    else
    {
        cout<<"Amicable Number test Passed";
    }
    return 0;
}