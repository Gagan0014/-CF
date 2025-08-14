// used string here
#include<bits/stdc++.h>
using namespace std;
void sol(string s,int n){
    if(n==s.length()-1){
        cout<<s[n];
        return ;
    }
    cout<<s[n]<<" ";
    sol(s,n+1);
}
int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    sol(s,0);
    cout<<endl;
    }
    return 0;
}