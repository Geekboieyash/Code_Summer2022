#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int n;
	cin>>n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	int flag = 0;
	int x = n;
	int y = n-1;
	while(x--)
	{
		if (v[y] != 0)
		{
			flag = y;
			break;
		}
		y--;
	}
	cout<<flag<<"\n";
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