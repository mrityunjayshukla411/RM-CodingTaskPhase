//20201207
#include<bits/stdc++.h>

using namespace std;

void stringCopy(char *string1,char *string2){
    int i = 0;
    while (*string1 != '\0')
    {
        string2[i] = *string1;
        string1++;
        i++;
    }
    
}

int main(){
    int i = 0;
    char string1[1000];
    char string2[1000];
    cout<<"Enter the string which you want to copy in another string"<<endl;
    cin>>string1;
    stringCopy(string1,string2);
    for (i = 0; string2[i] !='\0' ; i++)
    {
        cout<<string2[i];
    }
    return 0;
}