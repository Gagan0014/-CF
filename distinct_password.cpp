#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<char>v(n);
    char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int j=0;
    for(int i=0; i<k; i++){
        v[i]=arr[j];
        j++;
    }
    int sum=0;
    for(int i=k; i<n; i++){
        if(sum==j){
            sum=0;
        }
        v[i]=arr[sum];
        sum++;

    }
    for(int i=0; i<n; i++){
        cout<<v[i];
    }
    return 0;
}