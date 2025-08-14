#include<bits/stdc++.h>
using namespace std;
long long sol(vector<long long>arr,long long x,long long count){
    if(x==arr.size()){
        return count;
    }
    count+=arr[x];
    return sol(arr,x+1,count);
}
int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(long long i=0; i<n; i++){
        cin>>arr[i];
    }
    long long count=0;
    long long ans=sol(arr,0,count);
    cout<<ans;
    return 0;
}