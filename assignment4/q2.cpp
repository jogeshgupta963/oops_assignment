#include<iostream>
using namespace std;

class Bank{
    string name;
    long accNum;
    string type_acc;
    double bal;

    public:
       Bank(){
        name="";
        accNum=0;
        type_acc="";
        bal=0;
       }
       void setName(){
        cin>>this->name ;
       }
       void setAccNum(){
        cin>>this->accNum ;
       }
       void setType(){
        cin>>this->type_acc ;
       }
       void setBal(){
        cin>>this->bal;
       }

       string getName(){
        return this->name;
       }
       string getType(){
        return this->type_acc;
       }
       long getAcc(){
        return this->accNum;
       }
       double getBal(){
        return this->bal;
       }

        void deposit(double amt){
            this->bal +=amt;
        }
        void withdraw(double amt){
            if(this->bal > amt)
            this->bal -= amt;
        }
};

int main(){
    Bank b;
    b.setName();
    b.setBal();
    b.setAccNum();
    b.setType();
    
    b.deposit(10);

    cout<<b.getName()<<endl;
    cout<<b.getBal()<<endl;
    cout<<b.getType()<<endl;
    cout<<b.getAcc()<<endl;

    b.withdraw(100);

    cout<<b.getBal();

    

    
}