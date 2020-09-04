#include<iostream>
using namespace std;

class Area{
private:
    int s,l,b;
	float bs,ht;
public:
    int area(int s){
        this->s = s;
        return(this->s*this->s);
    }
    int area(int l,int b){
        this->l = l;
        this->b = b;
        return(this->l*this->b);
    }
    float area(float bs,float ht){
        this->bs = bs;
        this->ht = ht;
        return((this->bs*this->ht)/2);
    }
};

int main()
{
	int s,l,b;
	float bs,ht;
    Area obj;
	cout<<"Enter side of a square: ";
	cin>>s;
	cout<<"Enter length and breadth of rectangle: ";
	cin>>l>>b;
	cout<<"Enter base and height of triangle: ";
	cin>>bs>>ht;
	cout<<"Area of square is "<<obj.area(s);
	cout<<"\nArea of rectangle is "<<obj.area(l,b);
    cout<<"\nArea of triangle is "<<obj.area(bs,ht)<<"\n";
}