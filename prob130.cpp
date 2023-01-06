//https://www.codechef.com/START69C/problems/PERMUTATION
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
    int n ; cin>>n;
    vll v(n);
    int sum = 0;
    bool convert = true;
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; ++i)
    {
    	int op = 0;
    	if(v[i] > i+1)
    	{
    		cout<<"-1\n";
    		convert = false;
    		break;
    	}
    	else
    	{
    		op = (i+1) - v[i];
    		v[i]+= op;
    		sum += op;
    	}
    }
    if(convert == true) cout<<sum<<"\n";
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