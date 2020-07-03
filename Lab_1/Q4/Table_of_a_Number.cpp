#include<iostream>

using namespace std;

int main(){
    int opp;
    cout<<"\n1.Press 1 to print table of entered number";
    cout<<"\n2.press 2 to exit";
    cout<<"\nenter your choice: ";
    cin>>opp; 
    switch (opp)
    {
    case 1:
        int number;
        cout<<"\nenter number to display its table: ";
        cin>>number;
        for(int i=1;i<=10;i++)
            cout<<number<<"x"<<i<<"="<<i*number<<"\n";
        break;
    case 2:
        exit(0);
        break;
    default:
        cout<<"wrong choice!";
        break;
    }
}