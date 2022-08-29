#include<iostream>
using namespace std;

int sum(int arr[],int n){
    int sumarr=0;
    for(int i=0;i<n;i++){
        sumarr += arr[i];
        cout<<&arr[i]<<endl;
    
    }
    cout<<endl;
    return sumarr;
}
int main(){

int n;cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}


cout<<"sum"<<sum(arr,n);
}