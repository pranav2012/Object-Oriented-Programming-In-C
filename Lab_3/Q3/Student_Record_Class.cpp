#include<iostream>
#include<string.h>

using namespace std;

class Student{
    private:
        int age;
        int roll_no;
        char section;
        string name;
        string crs;
    public:
        Student(){
            cout<<"your name: ";
            getline(cin,name);
            cout<<"your course: ";
            getline(cin,crs);
            cout<<"your age: ";
            cin>>age;
            cout<<"your section: ";
            cin>>section;
            cout<<"your roll number: ";
            cin>>roll_no;
        }
        void getdata(){
            cout<<"name of the student is "<<name;
            cout<<", "<<name<<" is "<<age<<" years old";
            cout<<", "<<name<<" is doing "<<crs<<" section is "<<section<<" and roll number is "<< roll_no;
        }
};

int main(){
    Student obj;
    obj.getdata();
}