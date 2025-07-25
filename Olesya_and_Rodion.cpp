// took a long time and multiple submission because of a silly mistake as i could also return string but 
// i was tryin to return an integre out of bound range of int ranges

#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n,t;
    cin>>n>>t;
   string s="";
   long long int ans;
    if(t==10){
        if(n==1){
            cout<<-1;
            return 0;
        }else{
            s.push_back('1');
            for(long long int i=1; i<n; i++){
                s.push_back('0');
            }
            cout<<s;
            return 0;
        }
    }else{
        for(long long int i=0; i<n; i++){
            s.push_back('0'+t);
        }
        cout<<s;
    }
    return 0;
}