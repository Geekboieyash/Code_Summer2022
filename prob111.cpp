//https://www.codechef.com/START57C/problems/TWODIFFPALIN
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
    int a, b, sum;
    cin>>a>>b;
    sum = a+b;
    if ((a%2 != 0 && b%2 !=0) || sum < 3 || a==1 || b==1)
    {
    	cout<<"NO\n";
    }
    else cout<<"YES\n";
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