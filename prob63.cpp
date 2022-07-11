//https://codeforces.com/contest/1702/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    ll m ; cin>>m;
    ll x = 10;
    //cout<<m<<"\n";
    ll n = 0;

    for(int i = 1 ; i <= 9; i++)
    {
       
       if((m-x)<0)
       {
        n = i-1;
        break;
       }
        x = x*10;
    }
    cout<<n<<"\n";
   
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