#include<iostream>
#include<string.h>

using namespace std;

class privatemem{
    private:
        string data;
        int i;
    public:
        privatemem(){
            this->data="this is a secret mesage";
            i=5;
        }
};
int main(){
    privatemem obj;
    string *ptr = (string *)&obj;
    cout<<*ptr;
}