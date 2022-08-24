#include<iostream>
using namespace std;

class Distance{
    int feet;
    float inches;
    public:
        Distance(){
            this->feet = 0;
            this->inches= 0;
        }
        void set(int feet,float inches){
            this->feet=feet;
            this->inches=inches;
        }
        void disp(){
            cout<<this->feet<<" "<<this->inches<<endl;
        }
        Distance add(Distance x){
            Distance res;
            res.set(this->feet+x.feet,this->inches+x.inches);
            return res;
        }
};

int main(){
    Distance a,b,c;
     int feet;
    float inches;

    cin>>feet>>inches;
    a.set(feet,inches);
    
    cin>>feet>>inches;
    b.set(feet,inches);

    c = a.add(b);

    a.disp();
    b.disp();
    c.disp();
    
}