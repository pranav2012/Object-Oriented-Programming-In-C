#include<iostream>

using namespace std;

class statics{
    static int i;
    statics(){
        i++;
    }
};

int statics :: i = 0;

int main(){
   statics obj();
}