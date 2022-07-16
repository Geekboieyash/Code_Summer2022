//https://codeforces.com/contest/1705/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
#define frl for(int i=0; i<n; i++)

void solve()
{
  int n;cin>>n;
  vll v(n);
  for(int i=0 ; i<n; i++)
  {
    cin>>v[i];
  }  
  int flag = 0;
  int total = 0;
  for (int i = 0; i < n-1; i++)
  {
    if(v[i]>0 || flag == 1)
    {
      total = total + v[i];
      if(v[i] == 0) total++;
      flag = 1;
    }
  }
  cout<<total<<"\n";
  
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