#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    ll n; cin>>n;
    vll v;
    unordered_map<int , int> up; 
    for(int i = 0 ; i<n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
        up[x]++;
    }
    int flag = 0 ;

    for(auto it = up.begin(); it != up.end(); ++it)
    {
        int a = it->first;
        int b = it->second;
        if(b%a != 0)
        {
            flag =1;
            break;
        }
    }
    if(flag == 0) cout<<"YES\n";
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