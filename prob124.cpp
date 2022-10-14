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
    int n; cin>>n;
    vll v(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    int flag =0;
    //cout<<v[n-1]<<"\t";
    for (int i = n-1; i >0; i--)
    {
    	if(__gcd(v[i], v[i-1]) == 1)
    	{
    		//cout<<v[i]<<v[i-1]<<"\t";
    		if(v[i] != v[i+1])
    		{
    			flag = 2*i+1;
    		}
    		else
    		{
    			flag = 2*i+2;
    		}
    		
    		break;
    	}
    }
    if(flag >0)
    {
    	cout<<flag<<"\n";
    }
    else cout<<"-1\n";

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