#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void set_data(int x,int y){
        a=x;b=y;
    };
    complex sum(complex c){
        complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    };
    void display(){
        cout<<"real: "<<a<<"imaginary: "<<b;
    };
};
int main(){
    complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(5,6);
    c3=c1.sum(c2);
    c3.display();
    return 0;
    }
