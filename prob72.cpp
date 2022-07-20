//https://codeforces.com/contest/1706/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,m;
    cin>>n>>m;
    string s(m, 'B');
    while(n--)
    {
        int x; cin>>x;
        x--;
        x = min(x, m -x-1);
        if(s[x] == 'B') s[x] = 'A';
        else s[m-x-1] = 'A';
    }
    cout<<s<<"\n";
}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt","w", stdout);
freopen("input.txt ","r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}