#include<iostream>
using namespace std;
int main(){
    int x=5;
    cout<<"x ordinary variable, before reference variable: "<<x<<endl;
    int *y;
    y=&x;
    cout<<"y pointer variable giving address of x: "<<y<<endl;
    y++;
    cout<<"incresement in address by 1 but x is same :"<<y<<" x: "<<x<<endl;
    int &z=x;
    z++;
    cout<<"z is reference variable i.e. any operation on z changes the value of x: "<<x<<endl;
    cout<<"z val: "<<z<<endl;
    return 0;
}
//
