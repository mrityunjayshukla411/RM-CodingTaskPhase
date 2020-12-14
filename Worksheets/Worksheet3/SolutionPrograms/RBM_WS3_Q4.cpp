#include<bits/stdc++.h>

using namespace std;

int digitSum(int num){
    // int sum = 0;
    if (num>0)
    {
    return num%10 + digitSum(num/10);
    }
    else
    {
        return 0;
    }
        
}

int main(){
    int sum = 0;
    int num;
    cout<<"Enter the number whose digit sum you desire"<<endl;
    cin>>num;
    cout<< digitSum(num);
    return 0;
}