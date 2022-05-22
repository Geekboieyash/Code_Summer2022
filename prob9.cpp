#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int temp = 0 ;

	for (int i = 0; i < n-1; ++i)
	{
		if (a[i] > a[i+1])
		{
			temp++;
		}
	}
	if (temp ==0 | temp == 1)
	{
		cout<<"YES"<<"\n";
	}
	else cout<<"NO"<<"\n";



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