#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
// Xor make most significant bit disappear


void solve()
{
  int n;cin>>n;
  if(n<=3)
  {
    cout<<"-1\n";
  }
  else{
    vll v;
    for(ll i =1 ;i<=n; i++)    
    {
      v.push_back(i);
    }
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