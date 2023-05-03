#include<iostream>
using namespace std;

struct book
{
    private:
    int bookid;
    char title[20];
    float price;
    public:
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
    //cout<<"b1 bookid: "<<b1.bookid<<endl; will give error as bookid is inaccessable
    return 0;
}


