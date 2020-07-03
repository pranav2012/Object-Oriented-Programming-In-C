#include<iostream>

using namespace std;

int main(){
    int number[4],largest,pos=0;
    for(int i=0;i<4;i++){
        cout<<"enter element "<<i+1<<": ";
        cin>>number[i];
        pos=i;
    }
    number[0]>number[1] && number[0]>number[2]?largest=number[0]:number[1]>number[2]?largest=number[1]:largest=number[2];
    cout<<"largest number is "<<largest<<" at position "<<pos;
}