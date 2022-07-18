//https://codeforces.com/contest/1708/problem/A

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
   vll v(n);
   for (int  i = 0; i < n; i++)
   {
    cin>>v[i];
   }
   int flag = 0 ;
   //if(v[0] == 1) cout<<"Yes\n";
   for (int i = 1; i < n; ++i)
   {
    if(v[i]%v[1] != 0) flag = 0;
   }
   if(flag == 1) cout<<"Yes\n";
   else cout<<"No\n" ;   

   
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