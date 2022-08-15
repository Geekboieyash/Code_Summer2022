//https://www.codechef.com/AUG221D/problems/TWOTRAINS
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define loop(i,a,b) for(ll i=a; i<b; i++)
#define revloop(i,a,b) for(ll i=a; i>b; i--)
#define pb push_back

void solve()
{
    int n;cin>>n;
    n = n-1;
    vll v(n);
    int sum = 0;
    loop(i,0,n) {
    	cin>>v[i];
    	sum = sum + v[i];
    }
    sort(v.begin(), v.end());
    sum = sum + v[0];
    for (int i = 1; i < n; ++i)
    {
    	sum = sum + (v[i] - v[i-1]);
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