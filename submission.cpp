// count zeros and add in sum

#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        int count=0;
        int sum=0;
        while(n--){
            int x;
            cin>>x;
            if(x==0){
                count++;
            }else{
                sum+=x;
            }
        }
        cout<<sum+count<<endl;
        
    }
    return 0;
}
