#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
	int n;cin>>n;
	if(n>5)
	{
		if (n%3 == 0)
		{
			cout<<n/3<<"\n";
		}
		else
		{
			int x = n/3 +1;
		    cout<<x<<"\n";
		}
	}

}
int main()
{
    _INVINCI;
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}