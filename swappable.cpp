#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    unordered_map<long long,long long>m;
    for(long long i=0; i<n; i++){
        cin>>arr[i];
    }
    for(long long i=0; i<n; i++){
        m[arr[i]]++;
    }
   long long int count=0;
    for(auto it:m){
        long long int x=it.second;
            long long int c=(x*(x-1))/2;
            count+=c;
    }
        long long int res=(n*(n-1))/2;
        cout<<res-count;
    return 0;
}