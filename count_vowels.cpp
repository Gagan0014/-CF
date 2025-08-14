#include<bits/stdc++.h>
using namespace std;
int sol(string s,int n,int count){
    if(n==s.length()){
        return count;
    }
    if(toupper(s[n])=='A' || toupper(s[n])=='E' || toupper(s[n])=='I' || toupper(s[n])=='O' || toupper(s[n])=='U'){
        count++;
    }
    sol(s,n+1,count);
    return count;
}
int main(){
    string s;
    getline(cin,s);
    int count=0;
    int ans=sol(s,0,count);
   cout<<ans;
    return 0;
}