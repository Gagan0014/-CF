// check if sum of all vector =0 and and sum of vector z = 0


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int zz=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        sum+=x+y+z;
        zz+=z;
    }
    if(sum==0 && zz==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}