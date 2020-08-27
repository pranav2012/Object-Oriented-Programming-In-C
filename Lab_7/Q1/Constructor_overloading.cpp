#include<iostream>

    using namespace std;

class addition{
    private:
        int sum;
        double sum1;
        void getsum(double sum, string a){
            cout<<"sum of "<<a<<" is: "<<sum<<"\n";
        }
    public:
        addition(double var1, double var2){
            sum1 = var1 + var2;
            getsum(sum1,"float");
        }
        addition(int var1, int var2){
            sum = var1 + var2;
            getsum(sum,"int");
        }
};

int main(){
    addition obj(5, 8), obj1(4.11, 7.22);
}