//https://codeforces.com/contest/1736/problem/B
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
    int n;cin>>n;
    vll v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }

    if (n==1 || n==2)
    {
    	cout<<"YES\n";
    	/* code */
    }
    sort(v.begin(), v.end());
    vll gc(n+1);
    gc[0] = v[0];
    for (int i = 1; i < n+1; ++i)
    {
    	if(i<n)
    	{
    		gc[i] = v[n-3] * v[n-2];
    	}
    	else if(i>=n)
    	{
    		gc[i] = v[n-1] * (v[n-2]+1);
    	}
    }
    for (int i = 0; i < n+1; ++i)
    {
    	cout<<gc[i]<<" ";
    }
    cout<<"\n";

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