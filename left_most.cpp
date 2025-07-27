#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool check=true;
        vector<int>arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(arr[n-2]<arr[n-1]){
            cout<<"NO"<<endl;
        }else{
        for(int i=0; i<n-2; i++){
            if(arr[i+1]> 2*arr[i]){
                check=false;
                break;
            }
        }
        if(check==false){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
    }
    return 0;
}