#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    complex(int x,int y){ //parameterized constructor
       a=x;b=y;;
    };

    complex(int k){ //parameterized constructor
        a=k;
    };

     complex(){ //called as default constructor just like complier
    };
     void display(){
        cout<<a<<" "<<b;
    };
};

int main(){
   complex c1=complex(3,4),c4 ,c2=5;  //default constructor will be called by compiler garbage values
   c1.display();
   c2.display();
   c4.display();
   return 0;
}