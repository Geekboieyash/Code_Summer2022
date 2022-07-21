//https://codeforces.com/contest/1709/problem/0
//not correct 
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int x;
    cin>>x;
    vector<int> v(3);
    for (int i = 1; i <= 3; i++)
    {
        cin>>v[i];
        
    }
    int flag = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[x] == 0) {flag = 0; break;}
        else { flag = 1; x = v[x]; }
    }
    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
    

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