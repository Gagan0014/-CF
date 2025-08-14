// dont pass vector by refrence as it creates copies again and again theen causes memory limit exceeded

#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void sol(vector<vector<ll>>&arr1,vector<vector<ll>>&arr2,int n,int m){
    if(n==arr1.size()){
        return ;
    }
    cout<<arr1[n][m]+arr2[n][m];
    if(m<arr1[0].size()-1){
        cout<<" ";
       sol(arr1,arr2,n,m+1);
    }else{
        cout<<endl;
        sol(arr1,arr2,n+1,0);
    }
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>arr1(n,vector<ll>(m));
    vector<vector<ll>>arr2(n,vector<ll>(m));
    for(ll i=0; i<n; i++){
        for(int j=0; j<m; j++){
        cin>>arr1[i][j];
        }
    }
    for(ll i=0; i<n; i++){
        for(int j=0; j<m; j++){
        cin>>arr2[i][j];
    }
}
    sol(arr1,arr2,0,0);
    return 0;
}