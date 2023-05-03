#include<iostream>
using namespace std;

struct book
{
    int bookid;
    char title[20];
    float price;
    void input(){
    cout<<"give input as id,title,price"<<endl;
    cin>>bookid>>title>>price;
    };
    void display(){
    cout<<title<<endl;
    }
};

int main(){
    book b1;
    b1.input();
    b1.display();
    cout<<"b1 bookid: "<<b1.bookid<<endl; 
    return 0;
}


