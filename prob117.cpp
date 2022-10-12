//https://codeforces.com/contest/1736/problem/A
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
	int n; cin>>n;
	vll v(n), v2(n);
	int sum1= 0, sum2 =0;
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		sum1 += v[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>v2[i];
		sum2 += v2[i];
	}
	int ans=0;
	ans += abs(sum1 - sum2);
	int flag = 0;
	for (int i = 0; i < n; ++i)
	{
		if(v[i] != v2[i])
		{
			flag += 1;
		}
	}
	if(ans  == flag || flag == 0)
	{
		cout<<ans<<"\n";
	}
	if(ans != flag)
	{
		ans += 1;
		cout<<ans<<"\n";
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