#include <Iostream>
#include<string.h>

using namespace std;

int check_vowel(char str);
int main()
{
    char str[100],new_str[100];
    cout<<"enter a string: ";
    gets(str);
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(check_vowel(str[i]) == 0)
        {
            new_str[count] = str[i];
            count++;
        }
    }
    cout<<new_str;
    return 0;
}
int check_vowel(char ch)
{
    char vow[10]={'a','e','i','o','u','A','E','I','O','U'};
    int flag=0;
     for(int j=0;j<strlen(vow);j++){
            if(ch==vow[j]){
            flag=1;
            }
     }
    if(flag==1)
    return 1;
    else
        return 0;
}
