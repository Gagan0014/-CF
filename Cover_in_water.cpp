#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char>s(n);
        for(int i=0; i<n; i++){
            cin>>s[i];
        }
        bool isempty=false;
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.'){
                isempty=true;
                break;
            }
            if(s[i] == '.'){
                count++;
            }
        }
        if(isempty==true){
            cout<<2<<endl;
        }else{
            cout<<count<<endl;
        }
       
}
    return 0;
}