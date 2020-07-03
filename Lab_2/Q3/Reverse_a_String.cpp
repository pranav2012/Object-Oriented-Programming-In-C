#include<iostream>
#include<string.h>

using namespace std;

int main(){
char str[50],temp;
cout<<"enter any string: ";
gets(str);
int len=strlen(str)-1;
for(int i=0; i<len;i++,len--){
    temp=str[i];
    str[i]=str[len];
    str[len]=temp;
}
cout<<"Reversed string is: "<<str;
}