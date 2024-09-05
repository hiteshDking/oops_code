#include<iostream>
using namespace std;
class student{
    private:
    int marks[5];
    int sum;

    public:
    void setno(){
        for(int i=0 ;i<5 ;i++){
        cin>>marks[i];
        }
    }
    int getsum(){
        for(int i = 0; i< 5 ;i++){
            sum = sum +marks[i];
        }
        return sum;
    }

   
};

int main(){
    student s[4];
    
    int count = 0;
    int anna[5];
    int sum =0;
    for(int i=0 ; i<5 ; i++){
        cin>>anna[i];
        sum+=anna[i];
    }
    for(int i=0 ;i<4;i++){
        s[i].setno();
    }
    for(int i=0 ; i<4 ; i++){
        
        if(s[i].getsum()>sum){
            count++;
        }

    }
    cout<<"student who scores more then anna "<<count;
    return 0;

}