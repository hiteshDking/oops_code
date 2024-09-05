#include<iostream>
using namespace std;
class bank{
    private:
    string name;
    int acc;
    string type;
    int balance;

    public:
    void setname(string a){
        name =a;

    }
    void setacc(int b){
        acc = b;
    }
    void settype(string c){
        type = c;
    }
    void setbalance(int d){
        balance = d;
    }

    void deposit(int x){
       balance = balance+x; 
    }
    void withdrawl(int y){
        if(balance<y){
            cout<<"you have not that much money "<<endl;
        }
        else{
        balance = balance-y;
        }
    }
    void namee(){
        cout<<"name - "<<name<<endl;
    }
    void balancee(){
        cout<<"balance - "<<balance;
    }

};
int main(){
    bank b;
    b.setname("hit");
    b.setacc(123456789);
    b.settype("savings");
    b.setbalance(500);

    b.deposit(1000);
    b.withdrawl(3000);
    b.namee();
    b.balancee();



}
