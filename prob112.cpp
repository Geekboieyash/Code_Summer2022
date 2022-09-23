//https://www.codechef.com/START57C/problems/EVENSPLIT
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
    int n;
    cin>>n;
    string s; cin>>s;
    int o = 0, z =0;
    for (int i = 0; i < n; ++i)
    {
    	if(s[i] == '1')
    	{
    		o++;
    	}
    	else z++;
    }
    if(n <= 2) cout<<s<<"\n";
    else{
    string ans = "";
    while(z--)
    {
    	ans += "0"; 
    }
    while(o--)
    {
    	ans += "1";
    }
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