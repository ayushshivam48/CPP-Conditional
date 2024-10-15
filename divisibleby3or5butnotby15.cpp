#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    if((n%5==0 || n%3==0) && (n%15!=0)) cout<<" valid";
    else cout<<" invalid";
    }
