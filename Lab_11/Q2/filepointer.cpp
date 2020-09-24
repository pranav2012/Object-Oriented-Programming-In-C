#include <iostream>
#include <fstream>

using namespace std; 

class student { 
	int id; 
	char Name[20]; 

public: 
	void display(int K); 
}; 

void student::display(int K) 
{ 
	fstream fs; 
	fs.open("student.dat", ios::in | ios::binary); 
	fs.seekg(K * sizeof(student)); 
	fs.read((char*)this, sizeof(student)); 
	cout << "Current Position: "
		<< "student no: "
		<< fs.tellg() / sizeof(student) + 1; 
	fs.seekg(0, ios::end); 
	cout << " of " << fs.tellg() / sizeof(student) << endl; 
	fs.close(); 
} 
int main() 
{ 
	int K = 7; 
	student s; 
	s.display(K); 
	return 0; 
} 
