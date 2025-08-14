#include<bits/stdc++.h>
using namespace std;
void solve(int n,int x){
    if(n==0){
        return;
    }
    solve(n-1,x);
    for(int i=0; i<x-n; i++){
        cout<<" ";
    }
    for(int i=1; i<=2*n-1; i++){
        cout<<'*';
    }
    cout<<endl;

}
int main(){
    int n;
    cin>>n;
    solve(n,n);
    return 0;
}