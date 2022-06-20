//https://www.codechef.com/LTIME109D/problems/EQBYXOR
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int a,b,n; cin>>a>>b>>n;
    int x = a^b;
    if(x == 0)
    {
        cout<<"0"<<"\n";
    }
    else if(x<= n)
    {
        cout<<"1\n";
    }
    else if(n!= 0 && __lg(x) == __lg(n))
    {
        cout<<"2\n";
    }
    else cout<<"-1\n";
    


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