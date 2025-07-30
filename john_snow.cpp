// easy one

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>vis(n);
for(int i=0; i<n; i++){
    cin>>vis[i];    
}
int count=0;
sort(vis.begin(),vis.end());
int start=vis[0];
int end=vis[vis.size()-1];
for(int i=0; i<vis.size(); i++){
    if(vis[i]==start || vis[i]==end){
        count++;
    }
}
cout<<n-count;
return 0;
}