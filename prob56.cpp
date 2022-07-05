//https://www.codechef.com/submit/ARRAYRET?tab=statement


#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n;cin>>n;
    vector<long long>v(n);
    ll sum = 0;
    for(int i =0 ; i<n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    // cout<<sum<<"\n";
    ll num = sum/(n+1) ; 
    for(int i = 0; i<n; i++)
    {
     cout<<v[i]-num<<" ";
    }
    cout<<"\n";
}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}