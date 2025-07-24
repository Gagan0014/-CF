#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    int sum=0;
    if(t%2==0){
        cout<<t/2;
    }else{
        cout<<((t-1)/2)-t;
    }
    return 0;
}
