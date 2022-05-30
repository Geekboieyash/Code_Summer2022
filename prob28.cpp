#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back


void solve()
{
	int n;cin>>n;
	int ans =0;
	for(n; n>0; n-=2)
	{
		ans += n*n;
	}
	cout<<ans<<"\n";

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