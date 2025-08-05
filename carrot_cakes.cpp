// a little tricky

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    if(n<=k){
        cout<<"NO";
        return 0;
    }
    int one_oven=(n+k-1)/k*t;
    int baked=0;
    int two_oven=0;
    while(baked<n){
        two_oven+=t;
        if(two_oven<=d){
            baked+=k;
        }else if(two_oven>d){
            baked+=2*k;
        }
    }
    if(one_oven<=two_oven){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
 return 0;
}