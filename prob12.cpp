#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int


void solve()
{
	int x,y,z,w;
	cin>>w>>x>>y>>z;
	int total = w + y*z;
	if (total == x)
	{
		cout<<"filled"<<"\n";
	}
	else if (total > x)
	{
		cout<<"overflow"<<"\n";
	}
	else cout<<"Unfilled"<<"\n";
}
int main()
{
    _fast;
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
    return 0;
}