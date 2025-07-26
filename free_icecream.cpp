// just addition and substration

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,x;
    cin>>n>>x;
    long long int dis=0;
    for(int i=0; i<n; i++){
        char c;
        long long int no;
        cin>>c>>no;
        if(c=='+'){
            x+=no;
        }else if(c=='-'){
            if(x>=no){
                x-=no;
            }else{
                dis++;
            }
        }
    }
    cout<<x<<" "<<dis;
    return 0;
}