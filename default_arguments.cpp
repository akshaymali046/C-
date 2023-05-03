#include<iostream>
using namespace std;
int sum (int ,int,int=0);

int main(){
    int x=5;
    int y=6;
    cout<<sum (x,y);
    int z=7;
    cout<<sum(x,y,z);
    return 0;
}

int sum(int a,int b,int c){
    return a+b+c;
};
