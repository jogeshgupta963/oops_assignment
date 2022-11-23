#include<bits/stdc++.h>
using namespace std;

class Publication{
    string title;
    float price;
    
    public:
        Publication(){
            title="";
            price=0.0;
        }
        Publication(string title,float price){
            this->title = title;
            this->price = price;

        }
        void getData(){
            cout<<"\n Enter Title: ";
            cin>>this->title;

            cout<<"\n Enter Price: ";
            cin>>this->price;
            
        }
        void putData()
        {
            cout<<"Publication titles :"<<title<<endl;
            cout<<"Publication price :"<<price<<endl;
        }
};  

class Book:public Publication{
    
    int page_count;

    public:
        Book(){
            page_count=0;
        }
        Book(int page_count,string title,float price):Publication(title,price){
            this->page_count = page_count;
        }
         void getData(){
            Publication::getData();
            cout<<"\n Enter page_count: ";
            cin>>this->page_count;

        }
        void putData()
        {
            Publication::putData();
            cout<<"Page Count : "<<page_count<<endl;
        }
    
};

class Tape:public Publication{

    int playing_time;
    public:
        Tape(){
            playing_time=0;
        }
        Tape(int playing_time,string title,float price):Publication(title,price){
            this->playing_time = playing_time;
        }

        void getData(){
            Publication::getData();
            cout<<"\n Enter playing time: ";
            cin>>this->playing_time;
        }
        void putData(){
            Publication::putData();
            cout<<"Playing Time: "<<playing_time<<endl;
        }
};

int main()
{
    Book b;
    Tape t;
    b.getData();
    b.putData();

    return 0;
}