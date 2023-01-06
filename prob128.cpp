//https://www.codechef.com/START68C/problems/MAKEMONEY
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
    int n, x, c; cin>>n>>x>>c;
    vll v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    sort(v.begin(), v.end());
    int k = 0, sum = 0;
    for (int i = 0; i < n; ++i)
    {
    	int y = x - v[i];
    	if(y > c)
    	{
    		k++;
    		v[i] = x;
    	}
    	sum += v[i];
    }
    cout<<sum - k*c<<"\n";

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