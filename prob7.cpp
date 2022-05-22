#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int x;
	cin>>x;
	if (x/10 >= 100)
	{
		cout<<x/10<<"\n";
	}
	else cout <<"100"<<"\n";
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