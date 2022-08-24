#include<iostream>
using namespace std;

class Student{
  string rollNo;
  string name;
  long phoneNo;
  public:

  Student(){}

  Student(string rollNo,string name,long phoneNo){
	this->name = name;
	this->phoneNo = phoneNo;
	this->rollNo = rollNo;
  }

  string getName(){
	return this->name;
  }

  long getPhoneNo(){
    return this->phoneNo;
  }

  string rollNumber(){
    return this->rollNo;
  }
};

int main(){
  Student st("102118011","Jogesh",9137934131);
  cout<<st.getName()<<endl;
  cout<<st.getPhoneNo()<<endl;
  cout<<st.rollNumber()<<endl;
}
