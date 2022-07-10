#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
   int t,n, sum;
   cin>>t>>n>>sum;
   vll v;
   while(sum>n)
   {
    v.push_back(n);
    sum = sum -n;
   }
   v.push_back(sum);

    int z = v.size();
    for(int i = 0 ; i<z; i++)
    {
        cout<<v[i]<<" ";
    }
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