// easy one just find no of zeros and ones and then return abssolute of zero minus ones

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    int zero=0;
    int ones=0;
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        s.push_back(c);
        if(c=='0'){
            zero++;
        }else{
            ones++;
        }
    }
    cout<<abs(zero-ones);
    return 0;
}