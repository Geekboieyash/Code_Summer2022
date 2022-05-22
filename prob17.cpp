#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
		int n; cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	if (n == 1)
	{
		cout<<1<<"\n";
	}
	else if (n ==2)
	{
		if (a[0] == a[1])
		{
			cout<<n-1<<"\n";
		}
		else cout<<n<<"\n";
	}
	if (n>2)
	{
		
		for (int i = 0; i < n; i++)
		{
			if (a[i] == a[i+1])
			{
				if (a[i]==a[i+2])
				{
					n = n-2;
					
				}
				else
					{
						n = n-1;
						
					}
			}
		}
		cout<<n<<"\n";
	}
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