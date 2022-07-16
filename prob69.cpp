#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
#define F first
#define S second

void solve()
{
    int n; cin>>n;
    unordered_map<int, int>mp;
    vll v(n);
    for(int i = 0 ; i<n ; i++)
    {
        cin>>v[i];
         mp[v[i]]++;
    }
    int cnt = 0, grp = 0;
    for(auto it: mp)
    {
       // cout<<it.second<<" ";
        if(it.F == 1) cnt++;
        if(it.S >2) grp++;
    }
    cout<<grp<<" "<<cnt<<"\n";

    cout<<"\n";

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