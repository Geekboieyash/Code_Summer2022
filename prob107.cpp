//https://vjudge.net/contest/514755#problem/G
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
   
  
    unordered_map<ll,  ll> mp;
    for (ll i = 0; i<n; i++)
    {
    	int x; cin>>x;
    	if(mp.find(x) != mp.end())
    	{
    		mp[x]++;
    	}
    	else
    	{
    		mp[x] += 1; //even if we do mp[x] = 1 then also it show no difference
    	}
    }

    ll comb = (n*(n-1))/2;
    ll duplicate = 0;
    for(auto i: mp)
    {
    	duplicate += (i.second*(i.second -1))/2;
    	//cout<<i.first<<" "<<i.second<<"\n";
    }
   cout<<comb-duplicate<<"\n";
}

int main()
{
    _INVINCI;
    solve();
    return 0;
}