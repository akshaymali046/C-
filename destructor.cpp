#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    complex(int x,int y){ //parameterized constructor
       a=x;b=y;;
    };

     complex(){ //called as default constructor
    };

    complex (complex &c){  //copy constructor
        a=c.a;b=c.b;
    };
    void funn(){
        complex x1;
    };

    ~complex(){          //destructor
        cout<<"destructor is called"<<endl;
    };

};

int main(){
   complex b1; //1st time destructer called while ending default const function
   b1.funn(); //calling funn and while destroying x1 destructor called for 2nd time
   return 0;
}