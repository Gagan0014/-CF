// very tricky one 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1]={0};
    while(n){
        int b;
        cin>>b;
        arr[b]=1;
        while(arr[n]){
            cout<<n--<<" ";
        }
        cout<<endl;
    }
    return 0;
}