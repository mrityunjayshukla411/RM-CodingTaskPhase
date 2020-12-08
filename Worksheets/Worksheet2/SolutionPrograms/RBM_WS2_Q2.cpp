//20201207
#include<bits/stdc++.h>

using namespace std;

void lengthOfString(char *s){
    int len = 0;
    while (*s != '\0' )
    {
        len++;
        s++;

    }
    cout<<"The length of the string is "<<len<<endl;
    
} 

int main(){
    int i,j = 0;
    char givenstring[1000];
    cout<<"Enter the string who's length you desire"<<endl;
    cin>>givenstring;
    lengthOfString(givenstring);
    return 0;
}