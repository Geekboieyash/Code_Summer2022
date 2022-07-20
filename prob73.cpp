#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n;
    cin>>n;
    vll v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    unordered_map<int, vll> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]].pb(i);
    }
    vll ans(n, 0);
    for(auto it: mp)
    {
       cout<<it.first; 
    }

    
    
}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt","w", stdout);
freopen("input.txt ","r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}