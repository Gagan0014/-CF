/// in here m+i*5 /5 is getting us the groups forming of 5 as for n=6 and m=12
// if i=2 then sum=12 means there could be only two groups formed 
// which are 5 and 10 only using 1 
// if i=4 then sum= 16 means there can be three groups
// which are 5,10 aand 15 using 4 

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,i=1,sum=0;
    cin>>n>>m;
    for(; i<=n; i++){
        sum+=(m+i%5)/5;
    }
    cout<<sum;
    return 0;
}