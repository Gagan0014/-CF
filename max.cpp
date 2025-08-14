// base case is imp

#include<bits/stdc++.h>
using namespace std;
int sol(vector<int>arr,int i){
    if(i==arr.size()){
        return INT_MIN;
    }
    return max(arr[i],sol(arr,i+1));
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x=INT_MIN;
    int ans=sol(arr,0);
    cout<<ans;
    return 0;
}