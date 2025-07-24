#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    vector<int>children(n);
    vector<pair<int,int>>p1;
    vector<pair<int,int>>p2;
    vector<pair<int,int>>p3;
    for(int i=0; i<n; i++){
        cin>>children[i];
        s.insert(children[i]);
    }
    if(s.size()<3){
        cout<<0;
        return 0;
    }
    for(int i=0;i<n; i++){
        int x=children[i];
        if(x==1){
            p1.push_back({x,i+1});
        }else if(x==2){
            p2.push_back({x,i+1});
        }else{
            p3.push_back({x,i+1});
        }
    }
    int m=min(p1.size(),min(p2.size(),p3.size()));
    cout<<m<<endl;
    for(int i=0; i<m; i++){
        cout<<p1[i].second<<" "<<p2[i].second<<" "<<p3[i].second<<endl;
    }
    return 0;
}