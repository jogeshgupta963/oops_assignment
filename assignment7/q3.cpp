#include<bits/stdc++.h>
using namespace std;


class Shape{

    protected:
        double var1;
        double var2;

        public:
        void getData(){
            cout<<"Enter var1: ";
            cin>>var1;
            cout<<endl<<"enter var2: ";
            cin>>var2;
            cout<<endl;
        }
        virtual void displayArea(){}
};

class Triangle:protected Shape{
    public:
        void displayArea(){
           Shape::getData();
            cout<<"Area "<<(var1*var2)*0.5<<endl;
        }
};
class Rectangle:protected Shape{
    public:
          void displayArea(){
           Shape::getData();
            cout<<"Area "<<(var1*var2)<<endl;
        }
};

int main()
{
    Triangle t;
    t.displayArea();
    return 0;
}