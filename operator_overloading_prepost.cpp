#include<iostream>
using namespace std;

//we are using pre post increment in non-primitive data types i.e user defined.

class Integer{
    private:
    int a;
    public:

    Integer operator ++(){ //use this as pre increment operator
    Integer i;
    i.a=++a;     
    return i;
    };


    Integer operator ++(int){ // use this as post increment int is given as argument so that compiler does not comfuse with same function names. 
      Integer i;
      i.a=a++;
      return i;
    };
    void setdata(int x){
        a=x;
    };
    void showdata(){
        cout<<"a="<<a<<endl;
    };
};

int main()
{
    Integer i1,i2,i3;
    i1.setdata(3);
    cout<<"before any inc"<<endl;
    i1.showdata();
    i2=++i1;  // pre increment of datatype integer
    cout<<"pre inc"<<endl;
    i1.showdata();
    i2.showdata();
    i3=i1++; // post increment of non-primitive datatype
    cout<<"post inc"<<endl;
    i1.showdata();
    i3.showdata();    
    return 0;
}