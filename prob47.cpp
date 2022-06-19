#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int x,y;
    cin>>x>>y;
    int a,b;
    if(x%10 == 0)
    {
        a = x/10 -1;
    }
    else { a = x/10;}
    if(y%10 == 0)
    {
        b = y/10-1;
    }
    else b = y/10;
    cout<<abs(a-b)<<"\n"; 

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