#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1;
string s2;
void sol(ll n,ll sum, vector<ll>&v){
    if(n==s2.size()){
        v.push_back(sum);
        return ;
    }
    if(s2[n]=='+'){
        sol(n+1,sum+1,v);
    }else if(s2[n]=='-'){
        sol(n+1,sum-1,v);
    }else{
        sol(n+1,sum+1,v);
        sol(n+1,sum-1,v);
    }
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
getline(cin,s1);
getline(cin,s2);
ll sum1=0;
ll sum=0;
vector<ll>ans;
for(ll i=0; i<s2.length(); i++){
    if(s1[i]=='+'){
        sum1++;
    }else{
        sum1--;
    }
}
ll c=0;
sol(0,sum,ans);
for(auto it:ans){
    if(it==sum1){
        c++;
       cerr<<c<<"\n";// just to chcek the error 
    }
}
cerr<<ans.size()<<"\n";// to check if returning size valid or not
cerr<<c<<"\n";
cout<<fixed<<setprecision(12)<<(double)c/double(ans.size());
return 0;
}