#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll sol(ll n,ll sum){
    if(n==1){
        return sum;
    }
    sum++;
    if(n%2==0){
        return sol(n/2,sum);
    }else{
        return sol(3*n+1,sum);
    }
}
int main(){
    ll n;
    cin>>n;
    ll sum=1;
    ll ans=sol(n,sum);
    cout<<ans;
    return 0;
}