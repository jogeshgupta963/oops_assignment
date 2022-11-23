#include<bits/stdc++.h>
using namespace std;


class Student{
    int rollNo;
    string name;

    public:
        Student(){
            rollNo=0;
            name="";
        }
        void setData(){
            cout<<"Enter rollNo: ";
            cin>>rollNo;
            cout<<"\n Enter Name: ";
            cin>>name;
        }
        void getData(){
            cout<<"Name: "<<name<<endl;
            cout<<"Roll: "<<rollNo<<endl;
        }
};
class Exam:protected Student{
    protected:
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;

    public:
        Exam(){
            s1=0;
            s2=0;
            s3=0;
            s4=0;
            s5=0;
        }
         void setData(){
            cout<<"Enter marks in subject 1: ";
            cin>>s1;
            
            cout<<"\n Enter marks in subject 2: ";
            cin>>s2;
            
            cout<<"\n Enter marks in subject 3: ";
            cin>>s3;
            
            cout<<"\n Enter marks in subject 4: ";
            cin>>s4;
            
            cout<<"\n Enter marks in subject 5: ";
            cin>>s5;
            
        }
        void getData(){
            cout<<"Marks in Subject 1: "<<s1<<endl;
            cout<<"Marks in Subject 2: "<<s2<<endl;
            cout<<"Marks in Subject 3: "<<s3<<endl;
            cout<<"Marks in Subject 4: "<<s4<<endl;
            cout<<"Marks in Subject 5: "<<s5<<endl;
        }
        
};
class Result:private Exam{
    int total;
    float avg;

    public:

        
        void result(){
            Student::setData();
            Exam::setData();
            total = s1+s2+s3+s4+s5;
            avg = (s1+s2+s3+s4+s5)/5;
        }
        void getData(){
            Student::getData();
            Exam::getData();
            cout<<"Total: "<<total<<endl;
            cout<<"Average: "<<avg<<endl;
        }
};

int main()
{
    Result r;
    r.result();
    r.getData();
    return 0;
}