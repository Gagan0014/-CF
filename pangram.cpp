// here just store string in set and check if size==26 or not if yes return yes else no

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    set<int>st;
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        s.push_back(tolower(c));
        st.insert(tolower(c));
    }
    if(st.size()==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}