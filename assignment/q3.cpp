#include<iostream>
using namespace std;

void byValue(int a,int b){
    int c=a;
    a=b;
    b=c;
}
void byRef(int &a,int &b){
    int c = a;
    a = b;
    b=c;                                                             

}

int main(){
int a,b;
cin>>a>>b;
byValue(a,b);
cout<<a<<b<<endl;
byRef(a,b);
cout<<a<<b<<endl;
}