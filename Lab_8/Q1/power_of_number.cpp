#include<iostream>

using namespace std;

class Power{
    private:
        int number;
        int power;
        int answer;
        void calculate(){
            if (power == 0)
                answer = 1;
            else
                for(int i = 0; i < power;i++)
                    answer *= number;
            cout<<"\n"<<number<<"^"<<power<<" is: "<<answer<<"\n";
        }
    public:
       Power(int num, int p){
           answer = 1;
           number = num;
           power = p;
           calculate();
       }
};

int main(){
    Power obj(3,4);
    return 0;
}