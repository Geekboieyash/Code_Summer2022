#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back

void solve()
{
    int n; cin>>n;
    string s;
    cin>>s;
    // vowels  (aeiou) a  b(c)d  e  f(g)h  i  jk(l)mn  o  pq(r)st  u  vwxyz
    //
    ll ans = 1;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'c' || s[i] == 'g' || s[i] == 'l' || s[i] == 'r')
      {
      	ans *= 2;
      	ans %= mod;
      }
     
    }
    cout<<ans<<endl;
    
    

}
int main()
{
    _fast;
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}