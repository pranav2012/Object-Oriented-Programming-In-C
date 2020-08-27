#include<iostream>
using namespace std;
int area(int);
int area(int,int);
float area(float,float);
int main()
{
	int s,l,b;
	float bs,ht;
	cout<<"Enter side of a square: ";
	cin>>s;
	cout<<"Enter length and breadth of rectangle: ";
	cin>>l>>b;
	cout<<"Enter base and height of triangle: ";
	cin>>bs>>ht;
	cout<<"Area of square is "<<area(s);
	cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of triangle is "<<area(bs,ht)<<"\n";
}
int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}