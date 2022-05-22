#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int x,y;
	cin>>x>>y;
	int a = 500 -2*x + 1000 - 4*(x+y);
	int b = 1000 - 4*y + 500 - 2*(x+y);
	int z = max(a,b);
	cout<<z<<"\n";
}
int main()
{
    _fast;
    int t;cin>>t;
    while(t--)
    {
    	solve();
    }
    return 0;
}