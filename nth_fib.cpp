#include<bits/stdc++.h>
using namespace std;
int sol(int n,int a, int b){
    if(n==1){
        return a;
    }
    if(n==2){
        return b;
    }
    return sol(n-1,b,a+b);

}


int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int ans=sol(n,a,b);
    cout<<ans;
    return 0;
}