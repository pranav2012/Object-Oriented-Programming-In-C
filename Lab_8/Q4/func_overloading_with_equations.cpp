#include <iostream>
#include <cmath>

using namespace std;

class Equations{
    private:
        double a, b, c, eq[3];
        void addvalue(){
            eq[0] = pow(this->b,3) - pow(this->c,2);
            eq[1] = pow(this->b,2) + pow(this->c,2) - 4*this->a*this->c;
            eq[2] = pow(this->b,2) + pow(this->c, 2) + 2*this->a*this->c;
        }
        void show_result(){
            cout<<"\nb^3 - c^2 = "<< eq[0]<<"\n";
            cout<<"b^2 + c^2 - 4ac = "<< eq[1]<<"\n";
            cout<<"b^2 + c^2 + 2ac = "<< eq[2]<<"\n";
        }
    public:
        Equations(){
            a, b, c, eq[0], eq[1], eq[2] = 0;
        }
        void result(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
            addvalue();
            show_result();
        } 
        void result(double a, double b, double c){
            this->a = a;
            this->b = b;
            this->c = c;
            addvalue();
            show_result();
        }
        void result(int a, double b, int c){
            this->a = a;
            this->b = b;
            this->c = c;
            addvalue();
            show_result();
        }
        void result(int a, int b, double c){
            this->a = a;
            this->b = b;
            this->c = c;
            addvalue();
            show_result();
        }  
};

int main(){
    Equations obj;
    obj.result(5,3,2);
    obj.result(2.2,4.7,1.9);
    obj.result(7,2,4.77);
    obj.result(3,6.143,5);
    return 0;
}