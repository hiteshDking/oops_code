#include<iostream>
using namespace std;
class hotel{
    private:

    int rno;
    string name;
    int perday;
    int nod;
    int calc(){ 
        int x = perday*nod;
        if(x > 10000){
            return 1.5*x;
        }
        
        return x;
    }

    public:
    void setroom(int a){
        rno = a;
    }
    void setname(string b){
        name = b;
    }
    void setperday(int c){
        perday = c;
    }

    void setnoofday(int d){
        nod = d;
    }
    void checkout(){
        cout<<"room_no "<<rno<<" "<<endl;
        cout<<"name "<<name<<" "<<endl;
        cout<<"perday "<<perday<<" "<<endl;
        cout<<"nod "<<nod<<" "<<endl;
        cout<<"total amount "<<calc()<<" "<<endl;

    }
};

int main(){
    int n;
    cout<<"enter number of people :"<<endl;
    cin>>n;
    hotel h[n];
    int x ;
    string name;
    int pd;
    int nod;
    for(int i= 0 ; i<n ; i++){
        cout<<"detail of "<<i<<" ";
        cout<<"enter room number "; 
        cin>>x;
        h[i].setroom(x);
        cout<<"name ";
        cin>>name;
        h[i].setname(name);
        cout<<"perday ";
        cin>>pd;
        h[i].setperday(pd);
        cout<<"number of days ";
        cin >> nod;
        h[i].setnoofday(nod);
    }
    cout<<endl;
    cout<<"Output :"<<endl;
    for(int i= 0 ; i<n ; i++){
        
       h[i].checkout();
       cout<<endl;
    }


    return 0;

}