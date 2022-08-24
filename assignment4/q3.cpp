#include<iostream>
using namespace std;


class Complex{
    float real;
    float imaginary;
    public:
        void set(float real,float imaginary){
            this->real = real;
            this->imaginary = imaginary;
        }

        void disp(){
            cout<<this->real<<" + "<<this->imaginary<<"i"<<endl;
        }
        Complex sum(Complex num){
            Complex result;
            
            result.set(this->real+num.real,this->imaginary+num.imaginary);
            return result;
        }
};

int main(){

    Complex a,b,result;
    a.set(1,3);
    b.set(10,11);
    result = a.sum(b);

    a.disp();
    b.disp();
    
    result.disp();
}