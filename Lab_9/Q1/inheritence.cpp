#include<iostream>

using namespace std;

class Animals{
    public:
        string eats(){return "eat";}
        string sleeps(){return "sleep";}
};

class Dogs : public Animals{
    public:
        string barks(){return "bark";}
};

class YounOne : public Dogs {
    protected:
        string name;
    public:
        YounOne (string name){
            this->name = name;
        }
        string nameofyoungone(){return name;}
};

int main(){
    YounOne obj("Tom");
    cout<< obj.nameofyoungone() << " can " << obj.eats() << ", "<< obj.sleeps()<<" & "<<obj.barks()<<"\n";
    return 0;
}