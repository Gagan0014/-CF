#include<bits/stdc++.h>
using namespace std;
using ll= long long;
ll sol(vector<ll>&arr, ll n, ll m,ll sum){
    if(m==0){
        return sum;
    }
    sum+=arr[n];
    return sol(arr,n-1,m-1,sum);
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    ll sum=0;
    ll ans=sol(arr,n-1,m,sum);
    cout<<ans;
    return 0;
}