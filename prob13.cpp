#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int


void solve()
{
	int n; cin>>n;
	int a;
	vector<int> in;
	for(int i=0; i<n; i++)
	{
		cin>>a;
		in.push_back(a);
	}
	int t=0;
	for (int i = 0; i < n; ++i)
	{
		if (in[i] < 1000)
		{
			t++;
		}
	}
	cout<<n-t<<"\n";
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