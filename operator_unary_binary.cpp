/* + is a binary operator require 2 operands like a+b.
any operator which require only one operand called as unary operator.*/

#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;b=y;
    };
    complex operator -(){ // minus(-) will be now unary operator. naming member function with valid operator name
        complex temp;              // need to define function as operator initially
        temp.a=-a;           
        temp.b=-b;
        return temp;
    };

    void display(){
        cout<<"a="<<a<<" b="<<b<<endl;
    };
};

int main(){
   complex c1,c2;
   c1.setdata(3,4);  
   c2=c1.operator-(); // empty argument only one operand ie c1 itself.
   c2=-c1; // in binary operator it is necessary to write operator name after caller but in unary it is not compulsary we can write caller afterwards.
   c2.display();
   return 0;
}
