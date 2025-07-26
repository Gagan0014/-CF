// just check is any c m or y exits or no

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    char arr[n][m];
    int y=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y'){
                y++;
            }
        }
    }
    if(y!=0){
        cout<<"#Color";
    }else{
        cout<<"#Black&White";
    }
    return 0;
}