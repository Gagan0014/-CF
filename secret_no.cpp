#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll powerofk(ll k)
{
    ll x = 1;
    for (ll i = 1; i <= k; i++)
    {
        x *= 10;
    }
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll test_cases; // no of test cass
    cin >> test_cases;
    vector<ll>v;
    while (test_cases--)
    {         // till all  tesr cases are not solved
        ll n; // no which in in form of x+y;
        cin >> n;
        ll m=11;
        vector<ll> v;
        while(n>=m){
            if(n%m==0){
                ll x=n/m;
                v.push_back(x);
            }
            m=(m-1)*10+1;
        }
        cout<<v.size()<<"\n";
        for(int i=v.size()-1; i>=0; i--){
            cout<<v[i]<<' ';
        }
        cout<< '\n';
    }
    return 0;
}