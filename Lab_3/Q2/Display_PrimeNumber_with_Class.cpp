#include<iostream>

using namespace std;

class Prime{
    private:
        int number;
        bool is_prime;

        void prime_no(){
            for(int i=2;i<=number/2;i++){
                if(number%i==0){
                    is_prime=false;
                    break;
                }
            }
            is_prime?cout<<number<<" is a prime number":cout<<number<<" is not a prime number";
        }
    public:
        Prime(){
            is_prime=true;
            cout<<"enter number:";
            cin>>number;
            prime_no();
        }
};

int main(){
    Prime obj;
}