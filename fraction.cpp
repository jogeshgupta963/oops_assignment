#include<bits/stdc++.h>
using namespace std;

class Fraction{
    long num;
    long den;

    public:
        Fraction(){
            num =0;
            den=1;
        }
        Fraction(long num,long den){
            if(den == 0){
                exit(0);
            }
            this->num = std::abs(num);
            this->den = std::abs(den);
            
        }
        friend void operator ++ (Fraction &f1){
            f1.num++;
            f1.den++;
        }
        Fraction operator++(int)
        {
        // returned value should be a copy of the object before increment
            Fraction temp = *this;
            num++;
            den++;
            return temp;
        }
      
        void show(){
            cout<<num<<endl;
            cout<<den<<endl;

        }
};

int main()
{
    Fraction f1(5,2);
    f1++;
    f1.show();
    return 0;
}