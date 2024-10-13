#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"enter cp: ";
    cin>>cp;
    cout<<"enter sp: ";
    cin>>sp;
    if(cp>sp){ 
        cout<<"loss "<<(cp-sp);
    }
    else if(cp==sp){ 
        cout<<"no profit no loss";
    }
    else{
        cout<<"profit "<<(sp-cp);
    }
}