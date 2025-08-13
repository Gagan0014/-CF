#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,s;
    cin>>n>>s;
    vector<long long>arr(n);
    long long count=0;
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long i=0;
    long long j=0;
    while(i<n && j<n){
        sum+=arr[j];
        if(sum>s){
            sum-=arr[i];
            sum-=arr[j];
            i++;
            continue;
        }else{
            count=max(count,j-i+1 );
        }
        j++;
    }
    cout<<count;
    return 0;
}