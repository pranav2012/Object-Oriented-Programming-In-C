#include<iostream>

using namespace std;

static int id=101;
class EmployeeData{
    private:
        string name;
        string desigination;
        string email;
        int emp_id;
        string phone_no;
        float salary;
    public:
        EmployeeData(){
            emp_id=id;
            id++;
        }
        void get_detail(){
            cout<<"\nenter employee name: ";
            getline(cin,name);
            cout<<"\nenter desigination: ";
            getline(cin,desigination);
            cout<<"\nenter email id: ";
            getline(cin,email);
            cout<<"\nenter phone number: ";
            cin>>phone_no;
            cout<<"\nenter salary: ";
            cin>>salary;
        }

        void display_detail(){
            cout << emp_id << " " << name << " " << desigination << " " << email << " " << phone_no << " " << salary;
        }
};

int main(){
    EmployeeData obj;
    obj.get_detail();
    obj.display_detail();
}