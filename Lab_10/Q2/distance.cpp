#include <iostream>

using namespace std;
class DB;
class DM
{
public:
    float meter, centimetre;
    void print(){
        cout << "\nEnter the distance in metres and centimeters :";
        cin >> meter >> centimetre;
    }
    void display(){
        cout << "\nThe distance is:";
        cout << meter << " meters and " << centimetre << " centimeter\n";
    }
    friend void sum(DM, DB);
};

class DB
{
public:
    float inch, feet;
    void print(){
        cout << "\nEnter the distance in feets and inches:";
        cin >> feet >> inch;
    }
    void display(){
        cout << "\nThe distance is:";
        cout << feet << " feet and " << inch << " inch\n";
    }
    friend void add(DM, DB);
};

void sum(DM obj1, DB obj2){
    char ch;
    cout << "\nenter a for meter-cm:";
    cout << "\nenter b for feet-inch:";
    cout << "\nEnter your choice:";
    cin >> ch;
    if (ch == 'a' || ch == 'A'){
        DM obj;
        int c = (obj1.meter * 100 + obj1.centimetre + obj2.feet * 30.48 + obj2.inch * 2.54);
        if (c >= 100){
            obj.meter = c / 100;
            obj.centimetre = c % 100;
        }
        else{
            obj.meter = 0;
            obj.centimetre = c;
        }
        obj.display();
    }
    else{
        DB obj;
        int i = (obj1.meter * 39.37 + obj1.centimetre * .3937008 + obj2.feet * 12 + obj2.inch);
        if (i >= 12){
            obj.feet = i / 12;
            obj.inch = i % 12;
        }
        else{
            obj.feet = 0;
            obj.inch = i;
        }
        obj.display();
    }
}
int main(){
    DM a;
    DB b;
    a.print();
    b.print();
    sum(a, b);

}
