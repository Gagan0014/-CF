#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n,m;
    cin>>n>>m;
    vector<long long >p(n);
    vector<long long >q(m);
    for(long long  i=0; i<n; i++){
        cin>>p[i];
    }
    for(long long  i=0; i<m; i++){
        cin>>q[i];
    }
    long long  count=0;
    long long idx=0;
    for(long long  i=0;i<m; i++){
        long long  j=idx;
        while(j<n){
            if(q[i]>p[j]){
                j++;
                idx++;
                count++;
            }else{
                break;
            }
        }
        cout<<count<<" ";
    }
    return 0;
}