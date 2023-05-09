#include<iostream>
using namespace std;

int main(){
    int a=4,b_post,b_pre;
    cout<<"a before any increment: "<<a<<endl;
    b_pre=++a;
    cout<<"pre increment in a and then saving to b_pre: "<<b_pre<<endl;
    cout<<"a after pre increment: "<<a<<endl;
    b_post=a++;
    cout<<"pre increment in a and then saving to b_pre: "<<b_pre<<endl;
    cout<<"a after post increment: "<<a<<endl;
    return 0;
}
