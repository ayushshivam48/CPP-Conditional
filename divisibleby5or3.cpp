#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    if(n%5==0 || n%3==0)cout<<" either divisible by 3 or 5";
    else cout<<" nither divisible by 3 nor 5";
    }