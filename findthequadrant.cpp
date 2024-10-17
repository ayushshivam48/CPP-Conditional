#include<iostream>
using namespace std;
int main(){
    int x,y ;
    cout<<"enter the x co-ordinates : ";
    cin>>x;
     cout<<"enter the y co-ordinates : ";
    cin>>y;
    if(x>0 && y>0) cout<<"1st quadrant";
    else if(x<0 && y>0) cout<<"2nd quadrant";
    else if(x<0 && y<0) cout<<"3rd quadrant";
    else if(x>0 && y<0) cout<<"4th quadrant";
    else cout<<"origin";
}