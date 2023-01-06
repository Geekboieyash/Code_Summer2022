//https://www.codechef.com/START69C/problems/CHEFDINE
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
    int n, k; cin>>n>>k;
    vll v(n);
    vll a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    	/* code */
    }
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	/* code */
    }
    vector< pair<long, long>> vect;
    for (int i = 0; i < 3; ++i)
    {
    	vect.push_back( make_pair(v[i],a[i]) );
    }
    for (int i = 0; i < 3; ++i)
    {
    	cout << vect[i].first << " "
             << vect[i].second<<"\n" ;
    }
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