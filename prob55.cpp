#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n;cin>>n;
    int sum = 0, a;
    for(int i = 0; i<n; i++)
    {
        cin>>a;
        sum = sum + a;
    }   
    if(sum % 2 == 0)
    {
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
}
int main()
{
    _INVINCI;
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