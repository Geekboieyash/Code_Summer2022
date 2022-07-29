#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    ll n;cin>>n;
    vll v(n);
    for(ll i=0; i<n; i++)
    {
    	cin>>v[i];
    }
    sort(v.begin(), v.end());
    vll a;
    ll cnt = 1;
    
    for(ll i = 1 ; i<=n; i++)
    {
    	if(v[i] == v[i-1])
    	{
    		cnt++;
    	}
    	else
    	{
    		a.pb(cnt);
    		
    		cnt=1;
    	}
    }
    ll x = a.size();
    sort(a.begin(), a.end());
    if(x > 1)
    {
        ll y = a[x-1];
        ll z = a[x-2];
        if(y>1)
        {  if(y>=2*z)
        	{
        		if(y%2==0) cout<<y/2<<"\n";
        		else cout<<y/2+1<<"\n";
        	}
        	else cout<<z<<"\n";
        }
        else{
        	cout<<"1\n";
        }
    }
    else{
    	ll y = a[x-1];
    	if(y>1)
    	{
    	    if(y%2 == 0)cout<<y/2<<"\n";
    	    else cout<<y/2+1<<"\n";
    	}
    	else cout<<"1\n";

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