#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    complex(){
        cout<<"constructor function is called";
    };
};

int main(){
   complex c1,c2,c3; //object is initialized 3 times so contstucted should be executed 3 times
   return 0;
}