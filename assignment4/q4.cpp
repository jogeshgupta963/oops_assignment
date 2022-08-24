#include<iostream>
using namespace std;

class Rectangle{
    double length;
    double width;

    public:
        void setLength(){
            cin>>this->length;
        }
        void setWidth(){
            cin>>this->width;
        }
        float perimeter(){
            return 2*(this->length+this->width);
        }
        float area(){
            // cout<<this->length;
            // cout<<this->width;
            return this->length*this->width;
        }
        void show(){
            cout<<"length"<<this->length<<endl;
            cout<<"width"<<this->width<<endl;
        }
        int sameArea(Rectangle rec){
            return this->area() == rec.area();
        }

};

int main(){
    Rectangle a,b;
    a.setLength();
    a.setWidth();

    b.setLength();
    b.setWidth();

    cout<<"rec1 "<<a.area()<<" "<<a.perimeter()<<endl;
    cout<<"rec2 "<<b.area()<<" "<<b.perimeter()<<endl;

    if(a.sameArea(b)){
        cout<<"same";
    }else{
        cout<<"not same";
    }
}