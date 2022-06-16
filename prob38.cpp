//https://www.codechef.com/START43D/problems/MAKEQUAL
#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
  int a,b,c; cin>>a>>b>>c;
  // 2^(i-1) operation used at any one of three number at a time
  // right shift operators will be used 
  bool  good = false ;
  for (int i = 0; i<40; i++)
  {
    if( a==b and b==c)
    {
      good = true; 
      break; 
    }
    /*
    int ct = ((a>>i)&1) + ((b>>i)&1) + ((c>>i)&1);
			if (ct == 2) {
				if (((a>>i)&1) == 0) a += 1LL<<i;
				if (((b>>i)&1) == 0) b += 1LL<<i;
				if (((c>>i)&1) == 0) c += 1LL<<i;
			}
			else if (ct == 1) {
				if ((a>>i)&1) a += 1LL<<i;
				if ((b>>i)&1) b += 1LL<<i;
				if ((c>>i)&1) c += 1LL<<i;
			}
			else break;
    */

  }
  if (good) cout<<"YES"<<"\n";
  else cout<<"NO"<<"\n";

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