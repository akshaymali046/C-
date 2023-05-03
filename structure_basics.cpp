#include<iostream>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;
};

void display(book);
book input();

int main(){
    book b1;
    b1=input();
    display(b1);
    return 0;
}

book input(){
    book b;
    cout<<"give input as id,title,price"<<endl;
    cin>>b.bookid>>b.title>>b.price;
    return b;
}

void display(book b){
    cout<<b.title<<endl;
}

