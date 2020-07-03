#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char str[100];
    cout<<"enter any sentence: ";
    gets(str);
    int len=strlen(str),count=1;
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"there are "<< count<<" words in the string";
}
