#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   string data;
   ofstream outfile;
   outfile.open("user.dat");
   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   getline(cin,data);
   outfile << data << endl;
   cout << "Enter your age: "; 
   cin >> data;
   cin.ignore();
   outfile << data << endl;
   outfile.close();
   ifstream infile; 
   infile.open("user.dat"); 
   cout << "Reading from the file" << endl; 
   infile >> data; 
   cout << data << endl;
   infile >> data; 
   cout << data << endl; 
   infile.close();
   return 0;
}