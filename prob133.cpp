//
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
    int a; cin>>a;
    vll v(a,0);
    if(a == 2 )
    {
    	cout<<"2 1\n";
    	return ;
    }
    for (int i = 0, x=0; i < a; ++i)
    {
    	if(i<= a/2) 
    	{
    		v[i] = i+1;
    	}
    	if(i+1>a/2)
    	{
    		v[i] = a-x;
    		x++;
    	}
    }
    for (int i = 0; i < a; ++i)
    {
    	cout<<v[i]<<" ";
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