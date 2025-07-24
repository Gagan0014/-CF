## medium level problem on codeforces

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x;
    cin>>x;
    string s=to_string(x);
    for(int i=0; i<s.size(); i++){
        int y=s[i]-'0';
        if(y==9 && i==0){
            cout<<9;
        }else if((9-y)>y){
            cout<<y;
        }else{
            cout<<9-y;
        }
    }
    return 0;
}