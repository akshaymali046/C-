#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a=x;b=y;
    };
    complex operator +(complex c){ //naming member function with valid operator name
        complex temp;              // need to define function as operator initially
        temp.a=a+c.a;              // this operator will be called only when its areguments is complex else it will go with already existing operstor
        temp.b=b+c.b;
        return temp;
    };

    void display(){
        cout<<"a="<<a<<" b="<<b<<endl;
    };
};

int main(){
   complex c1,c2,c3;
   c1.setdata(3,4);  
   c2.setdata(5,6);
   c3=c1.operator+(c2); //
   c3=c1+c2;   // advantages of using operator as function name
   cout<<"is user defined operator affecting default operators: " <<5+6<<endl; // this plus operator used only for primitive data type
   c3.display();
   return 0;
}

/* when the operator is being used for multiple jobs called its overloading.
here + is used to add two diffenrent datatypes primitive and complex.
way to implement polymorphism.
similar to function overloading.
we can use all operators used in c for function naming except sizeof and ?:*/