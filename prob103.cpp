//https://codingcompetitions.withgoogle.com/kickstart/round/00000000008f49d7/0000000000bcee64
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
    ll n,m;
    cin>>n>>m;
    ll temp, sum=0;

    for (int i = 0; i < n; ++i)
    {
    	cin>>temp;
    	sum += temp;
    }
    ll k = sum/m;
    
    cout<<sum-k*m<<"\n";
}
int main()
{
  #ifndef ONLINE_JUDGE
freopen("output.txt","w", stdout);
freopen("input.txt ","r", stdin);
#endif
    _INVINCI;
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}