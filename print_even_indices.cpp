#include<bits/stdc++.h>
using namespace std;
void sol(vector<int>arr,int n){
    if(n==0){// base case
        cout<<arr[n];
        return ;
    }
    if(n%2==0){
        cout<<arr[n]<<" ";  
        sol(arr,n-2);
    }else{
        sol(arr,n-1);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sol(arr,n-1);
    return 0;
}