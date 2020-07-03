#include<iostream>
using namespace std;
class rectangle{
    private:
        float length;
        float breath;
        float area;
        void calc(){
            this->area=length*breath;
        }
    public:
        rectangle(float l, float b){
            this->length=l;
            this->breath=b;
            calc();
        }
        void compare(rectangle object){
            this->area > object.area ? cout<<"area of rectangle 1 is: "<< 
            this->area <<" which is bigger than rectangle 2" : this->area < object.area?cout<<"area of rectangle 2 is: "
            <<object.area<<" which is bigger than rectangle 1":cout<<"they both are equal";
        }
};
int main(){
    float len[2],brt[2];
    for(int i=0;i<2;i++){
        cout<<"enter length of rectangle "<<i+1<<": ";
        cin>>len[i];
        cout<<"enter breath of rectangle "<<i+1<<": ";
        cin>>brt[i];
    }
    rectangle obj1(len[0],brt[0]),obj2(len[1],brt[1]);
    obj1.compare(obj2);
    }