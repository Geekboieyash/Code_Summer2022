//https://www.codechef.com/submit/PRIME_XOR?tab=statement
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    ll x,y,z;
    cin>>x>>y;
    z = x^y;
    // there will be 2 odd and one even case always for x y and z
    // if x even then  a and b both are odd and c  = 2,  a will be find by Y and Z
    // if y even then  b and c both are odd and a = 2,  b and c will come from x and z
    // if z even ---- similar approach - > b = 2, x and y
    vll v(3);
    if(x%2 == 0)
    {
        v[2] = 2;
        v[0] = z^2;
        v[1] = y^2;
    }
    if(y%2 == 0)
    {
        v[0] = 2;
        v[1] = x^2;
        v[2] = z^2;
    }
    if(z%2 == 0)
    {
        v[1] = 2;
        v[0] = x^2;
        v[2] = y^2;
    }
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    
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