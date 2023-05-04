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

    complex (complex &c){  //copy constructor
        a=c.a;b=c.b;
    };

    void display(){
        cout<<a<<" "<<b<<endl;
    };
};

int main(){
   complex c1=complex(3,4),c4 ,c2=5;  //default constructor will be called by compiler garbage values
   complex c3=complex(c1); //c3(c2) or c3=c1
   c1.display();
   c3.display();
   c2.display();
   c4.display();
   return 0;
}