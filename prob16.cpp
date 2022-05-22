#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int n;
	cin>>n;
	int x=0; int y=0;
	for (int i = 0; i < n; i++)
	{
		string inp;
		cin>>inp;
		string str("START38");
		int res = inp.compare(str);
		if (res == 0)
		{
			x++;
		}
		else y++;
	}
	cout<<x<<" "<<y<<"\n";
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