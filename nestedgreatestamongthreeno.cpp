#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1st no: ";
    cin>>a;
    cout<<"enter 2nd no: ";
    cin>>b;
    cout<<"enter 3rd no: ";
    cin>>c;
    if(a>b){
        if(a>c){
        cout<<a<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
    }
    else{
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{
            cout<<c<<" is greatest";
        }
    }
}