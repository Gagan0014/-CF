// just find occurances of RL and then act to idx find the min time 

#include<bits/stdc++.h>
using namespace std;
int anss(int arr[],int idx1, int idx2){
    int ini=arr[idx1];
    int ini2=arr[idx2];
    int ans=0;
    while(ini!=ini2){
        ini++;
        ini2--;
        ans++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    int idx1=0;
    int idx2=0;
    bool check=false;
    int ans=INT_MAX;
    for(int i=0; i<n-1; i++){
        if(s[i]=='R' && s[i+1]=='L'){
            idx1=i;
            idx2=i+1;
            check=true;
            int z=anss(arr,idx1,idx2);
            ans=min(ans,z);
        }
    }
    if(check==true){
        cout<<ans;
    }else{
        cout<<-1;
    }
    return 0;
}