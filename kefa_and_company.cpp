#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,d;
    cin>>n>>d;
    vector<pair<long long,long long>>arr(n);
    for(long long i=0; i<n; i++){
        long long x,y;
        cin>>x>>y;
        arr[i]={x,y};
    }
    long long sum=0;
    long long curr=0;
    sort(arr.begin(),arr.end());
    long long j=0;
    for(int i=0; i<n; i++){
    while(j<n && arr[j].first-arr[i].first<d){
        curr+=arr[j].second;
        j++;
    }
    sum=max(curr,sum);
    curr-=arr[i].second;
}
    cout<<sum;
    return 0;
}