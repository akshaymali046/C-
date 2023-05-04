#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    complex(int x,int y){
        a=x;b=y;;
    };
    complex(int k){
        a=k;
    };
    complex(){
        a=0;b=0;
    };
    void display(){
        cout<<a<<" "<<b;
    };
};

int main(){
   complex c1(3,4),c2(5),c4;  
   //c1=complex(3,4),c2=5;
   //complex c3; it will give error as is not finding any constructor function that is not taking any arguments
   c1.display();
   c2.display();
   c4.display();
   return 0;
}