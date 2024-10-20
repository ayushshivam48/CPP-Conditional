#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter Ram's age: ";
    cin>>a;
    cout<<"enter Shyam's age: ";
    cin>>b;
    cout<<"enter Ajay's age: ";
    cin>>c;
    if(a<b){
        if(a<c){
        cout<<a<<" is younger";
    }
    else{
        cout<<c<<" is younger";
    }
    }
    else{
        if(b<c){
            cout<<b<<" is younger";
        }
        else{
            cout<<c<<" is younger";
        }
    }
}