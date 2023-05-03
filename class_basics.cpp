#include<iostream>
using namespace std;
class complex{
    int a,b; //by default private variables
    public:  // need to specify if used in main or other functions
    void set_data(int x,int y){
        a=x;b=y;
    };
    void display_data(){
        cout<<"a"<<a<<"b"<<b<<endl;
    };
    void mul();
};

void complex:: mul(){   //memebership declaration
    cout<<"multiplication is: "<<a*b;
}

int  main(){
    complex b1;
    b1.set_data(5,4);
    b1.display_data();
    b1.mul();
    return 0;
}