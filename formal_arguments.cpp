#include<iostream>
using namespace std;
int callbyval (int ,int);
int callbypointer (int * ,int *);
int callbyref (int &, int &);

int main(){
    int x=5;
    int y=6;
    //call by value
    int sbyval = callbyval (x,y);
    //call by pointer variable
    int sbypoint=callbypointer(&x,&y);
    //call by ref varibles
    int sbyref= callbyref(x,y);
    cout<<sbyval<<" "<<sbypoint<<" "<<sbyref<<endl;
    return 0;
}

int callbyval(int a,int b){
    return a+b;
};

int callbypointer(int *a, int *b){
    return *a+*b;
};

int callbyref(int &a,int &b){
    return a+b;
}

//
