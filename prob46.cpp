#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int x,n;
    cin>>x>>n;
   int a = x+n;
   if(a%4 == 0)
   {
    cout<<"Alice"<<"\n";
   }
   else if((a-1)%4 == 0) {
    cout<<"Alice"<<"\n";
   }
   else cout<<"Bob"<<"\n";
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