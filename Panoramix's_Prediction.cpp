// tricky conceptual 
#include<bits/stdc++.h>
using namespace std;
bool prime(int t){
    if(t==2){
        return true;
    }
    if(t<2 || t%2==0){
        return false;
    }
    for(int i=3; i*i<=t; i+=2){
        if(t%i==0){
            return false;
    }
}
    return true;
}
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=n+1; i<=m; i++){
        if(prime(i)){
            if(i==m){
               cout<<"YES";
               return 0; 
            }else{
                cout<<"NO";
                return 0;
            }
        }
    }   
    cout<<"NO";
    return 0;
}