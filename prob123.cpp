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
    int n;
    cin>>n;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin>>x;
    	mp[x]++;
    }
    int flag =0;
    for (auto& i: mp)
    {
    	if(i.second > 1)
    	{
    		flag = 1;
    	}
    	//cout<<i.first<<": "<<i.second<<endl;
    }
    if(flag == 0) cout<<"YES\n";
    else cout<<"No\n";
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