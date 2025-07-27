// just check is a equal b if yes return -1 else return max of a or b

#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a>>b;

    bool check=true;
    if(a.length()==b.length()){
        for(int i=0; i<a.length(); i++){
            if(a[i]!=b[i]){
                check=false;
                break;
            }
        }
    }else{
        check=false;
    }
    if(check==true){
        cout<<-1;
    }else{
        cout<<max(a.length(),b.length());
    }
    return 0;
}