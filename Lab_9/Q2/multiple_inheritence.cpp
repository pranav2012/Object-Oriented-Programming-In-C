#include<iostream>

using namespace std;

class Mammals{
    public:
        string birth(){return "give birth";};
};

class WingedMammals{
    public:
        string fly(){return "fly";};
};

class Bat : public Mammals, public WingedMammals{
    public:
        string dark(){return "bat's stays in dark";}
};

int main(){
    Bat obj;
    cout<< obj.dark()<<" can "<< obj.birth() << " & " << obj.fly() << "\n";
    return 0;
}
