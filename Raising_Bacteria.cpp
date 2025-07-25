// just convert the no into binary and check the count of ones

#include<bits/stdc++.h>
using namespace std;
int main(){
    int bact;
    cin>>bact;
    int count=0;
    while(bact>0){
        int curr=bact%2;
        if(curr==1){
            count++;
        }
        bact/=2;
    }
    cout<<count;
    return 0;
}