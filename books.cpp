#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int i=0;
    int j=0;
    int curr=0;
    int maxlength=0;
    while(j<n){
        curr+=arr[j];
        if(curr>t){
            curr=curr-arr[i];
            i++;
        }
        maxlength=max(maxlength,j-i+1);
        j++;
}
    cout<<maxlength;
    return 0;
}