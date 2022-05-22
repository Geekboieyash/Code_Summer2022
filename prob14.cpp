#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int n, m;
	cin>>n>>m;
	vector<int> a;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	int x = a[n-1] + a[n-2] + ((a[n-1] - a[n-2]) % m); 
	int y = a[n-1] + a[n-2] + ((a[n-2] - a[n-1]) % m); 
	if (x > y || x == y)
	{
		cout<<x<<"\n";
	}
	else cout<<y<<"\n";
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