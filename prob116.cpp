//https://codeforces.com/contest/1730/problem/a
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
    int n,a;
    cin>>n>>a;

    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin>>x;
    	mp[x]++;
    }
    int sum = 0;
    for(auto&i : mp)
    {
    	int x = i.second;
    	int y = a;
    	sum += min(x,y);
    }
    cout<<sum<<"\n";
    

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