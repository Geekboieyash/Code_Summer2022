#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int n; cin>>n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int x; cin>>x;
        v.push_back(x);
	}
    int y = n-1;
    int x = n/2;
    int op = 0;
    for (int i = 0; i < x; i++)
    {
        if(v[i] != v[y])
        {
            int a = v[i]^v[y];
            v[i] = v[y] = a;
            op++;
        }
        y--;
    }
    cout<<op<<"\n";
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