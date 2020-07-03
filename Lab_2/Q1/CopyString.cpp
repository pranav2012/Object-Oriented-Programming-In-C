#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char string[10],string1[10];
    cout<<"enter any string: ";
    gets(string);
    int len=strlen(string);
    for(int i=0;i<len;i++){
        string1[i]=string[i];
    }
    cout<<"the copied string is " << string1;
    return 0;
}
