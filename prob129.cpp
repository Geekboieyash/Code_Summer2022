//https://www.codechef.com/START68C/problems/XORPROD
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define loop(i,a,b) for(ll i=a; i<b; i++)
#define revloop(i,a,b) for(ll i=a; i>b; i--)
#define pb push_back
#define srt(v) sort(v.begin(), v.end())

void solve()
{
    ll n; cin>>n;
    vll v(n);
    ll ones = 0;
    for (ll i = 0; i < n; ++i)
    {
    	cin>>v[i];
    	if(v[i]==1)
    	{
    		ones++;
    	}
    }
    sort(v.begin(), v.end());
    for (ll i = 0; i < n; ++i)
    {
    	if(v[i] != 1 && v[i]%2 == 0 && ones>0)
    	{
    		v[i]++;
    		ones--;
    	}
    }
    ll ans =1;
    for (ll i = 0; i < n; ++i)
    {
    	ans = (ans*v[i])%998244353;
    }
    cout<<ans<<"\n";

}
int main()
{
    _INVINCI;
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}