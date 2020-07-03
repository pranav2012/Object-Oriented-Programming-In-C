#include<iostream>

using namespace std;

class CalculateDistance{
    private:
        int distance;
        int sum;
        int difference;
    public:
        CalculateDistance(int val){
            distance=val;
        }
        void getsum(CalculateDistance obj){
            sum = this->distance + obj.distance;
            cout<<"sum is: \n";
            cout<<sum/1000<<" km and "<<sum%1000<<" meteres\n";
        }

        void getdiff(CalculateDistance obj){
            difference = this->distance - obj.distance;
            difference<0?difference*=-1:difference=difference; 
            cout<<"diffrence is: \n";
            cout<<difference/1000<<" km and "<<difference%1000<<" meteres\n";
        }
};

int main(){
    float distance1,distance2;
    cout<<"enter distance 1: ";
    cin>>distance1;
    cout<<"enter distance 2: ";
    cin>>distance2;
    CalculateDistance obj(distance1);
    CalculateDistance obj1(distance2);
    obj.getsum(obj1);
    obj.getdiff(obj1);
}