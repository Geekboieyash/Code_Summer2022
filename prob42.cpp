#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int a,b;
    cin>>a>>b;
    for(int i = 0; i< min(a,b); ++i)
    {
        cout<<"01";
    }
    for (int i = 0; i < abs(a-b); ++i)
    {
        cout<<(a<b ? 1: 0);
    }
    cout<<"\n";
    
}
int main()
{
    _fast;
#ifndef ONLINE_JUDGE
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}