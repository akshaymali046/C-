#include<iostream>
using namespace std;

class account{
   private:
   int balance;
   static float roi; //static member variable not allocated memory inside class
   public:
   void setbalance(int c){
    balance=c;
   };

   static void setroi(float r){  // static member function
       roi=r;
   }

   void display(){
    cout<<"balance: "<<balance<<" roi: "<<roi<<endl; 
   }
};
void fun();
float account:: roi=3.5; //need to be declared outside to allocate memeory to roi
int main(){
    fun();
    account a1 ,a2;

    a2.setroi(4.5); //setting roi using object class
    account::setroi(4.5); //setting roi without any objects using static function
    a2.display(); //a2 's balance will throw garbage vale

    a1.setbalance(3);
    a1.display();

    return 0;
}

void fun(){
    static int x; //permanant and one time memory allocated to x at starting of program
    int y ; //erased and allocated memory for each fun call
}