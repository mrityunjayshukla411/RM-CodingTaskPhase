#include<bits/stdc++.h>

using namespace std;

int fibonacciSeries(int n){

    if (n <= 1)
    {
        return n;
    }
    
    
        return fibonacciSeries(n-2) + fibonacciSeries(n-1); 

    
    

}

int main(){
    int i = 0;
    cout<<"First 40 terms of the fibonacci series are"<<endl;
    for ( i = 0; i < 40; i++)
    {
        cout<<fibonacciSeries(i)<<endl;
    }
    
    return 0;
}