#include <iostream> 

using namespace std; 

class Distance { 
public: 
	int feet, inch; 
	Distance() 
	{ 
		this->feet = 0; 
		this->inch = 0; 
	} 
	Distance(int f, int i) 
	{ 
		this->feet = f; 
		this->inch = i; 
	} 

    friend Distance operator+(Distance&, Distance&); 
}; 
Distance operator+(Distance& d1, Distance& d2) 
{ 
	Distance d3; 
	d3.feet = d1.feet + d2.feet; 
	d3.inch = d1.inch + d2.inch; 
	return d3; 
} 

// Driver Code 
int main() 
{ 
	Distance d1(8, 9); 
	Distance d2(10, 2); 
	Distance d3; 
	d3 = d1 + d2; 
	cout << "\nTotal Feet & Inches: " << d3.feet << "'" << d3.inch; 
	return 0; 
} 
