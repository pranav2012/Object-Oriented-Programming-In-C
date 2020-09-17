#include <iostream>

using namespace std;

class Calculator{
    private:
        double n1,n2,ans;
        char opp;
    public:
        Calculator(){
           answer();
        }

        void answer(){
            char choice;
            do{
                start:
                cout<< "Enter first number, Operator, second number: ";
                cin>>n1>>opp>>n2;
                switch (opp){
                case '+': ans = n1 + n2;
                          break;
                case '-': ans = n1 - n2;
                          break;
                case '*': ans = n1 * n2;
                          break;
                case '/': ans = n1 / n2;
                          break;
                default:
                    cout<<"wrong choice!!\n";
                    ans = 0;
                    goto start;
                    break;
                }
                cout<<"Answer = "<<ans<<"\n";
                cout<<"do another? Y/N ";
                cin>>choice;
            }while(choice == 'y' || choice == 'Y');
        }
};

int main(){
    Calculator obj;
    return 0;
}