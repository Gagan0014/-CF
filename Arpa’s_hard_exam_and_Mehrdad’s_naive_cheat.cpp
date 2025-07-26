// just  no theory

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0){
        cout<<1;
    }else if(n%4==0){
        cout<<6;
    }else if(n%2==0 && n%4!=0){
        cout<<4;
    }else if((n+1)%4==0){
        cout<<2;
    }else{
        cout<<8;
    }


    return 0;
}