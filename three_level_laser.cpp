#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,u;
    cin>>n>>u;
    vector<double>arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
// check if Ek-Ei <=u then do the operation else move each a head;
// n=Ek-Ej/Ek-Ei
    double ef=-1;
    int j=0;
    for(int i=0; i<n; i++){
        while(j<n && arr[j]-arr[i]<=u) j++;
        if(j-1>=0 && j-i>=3){
            ef=max(ef,(arr[j-1]-arr[i+1])/(arr[j-1]-arr[i]));
        }
    }
    cout << fixed << setprecision(12) << ef << endl;
    return 0;
}