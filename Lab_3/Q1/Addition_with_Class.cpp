#include<iostream>

using namespace std;

class Addition{
    private:
        int var1;
        int var2;
        int sum;
    public:
        int displaysum(){
            return sum;
        }
        Addition(){
           cout<<"enter 1st variable: ";
            cin>>var1;
            cout<<"enter 2nd variable: ";
            cin>>var2;
            sum=var1+var2;
        }
};

int main(){
    Addition obj;
    cout<<"sum is: "<<obj.displaysum();
}