#include<bits/stdc++.h>

using namespace std;

int euclideanDivisor(int num1,int num2){
    if (num1 == 0)
    {
        return num2;
    }
    if (num2 == 0)
    {
        return num1;
    }
    if (num1 > num2)
    {
        int R = num1%num2;
        return euclideanDivisor(num2,R);
        
    }
    if (num2 > num1)
    {
        int R = num2%num1;
        return euclideanDivisor(num1,R);
    }
        
    
}

int main(){
    int num1,num2;
    cout<<"Enter the two numbers whose greatest common divisor you desire"<<endl;
    cin>>num1>>num2;
    cout<<"The greatest common divisor is "<<endl;
    cout<<euclideanDivisor(num1,num2);
    return 0;
}