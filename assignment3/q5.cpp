#include<iostream>
using namespace std;

class Cricketer{
    string name;
    int age;
    int numberOfMatches;
    int avgRuns;

    public:
    Cricketer(){

    }
        Cricketer(
             string name,
             int age,
             int numberOfMatches,
             int avgRuns
             ){
                this->name = name;
                this->age = age;
                this->numberOfMatches = numberOfMatches;
                this->avgRuns = avgRuns;
             }

             int getAvgScore(){
                return this->avgRuns;
             }
};

void getAllCricketers(Cricketer arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i].getAvgScore()<<endl;
    }
}

int main(){
    int n=20;
    Cricketer arr[n];

    for(int i=0;i<n;i++){
        string name;
        int age;
        int numberOfMatches;
        int avgRuns; 
        cin>>name>>age>>numberOfMatches>>avgRuns;
        Cricketer a(name,age,numberOfMatches,avgRuns);
        arr[i] = a;
    }
    getAllCricketers(arr,n);
}