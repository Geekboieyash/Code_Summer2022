#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int a,b;
	cin>>a>>b;
	if(a*10 > b*5)
	{
		cout<<"FIRST"<<"\n";
	}
	else if (b*5 > a*10)
	{
		cout<<"SECOND"<<"\n";
	}
	else if (a*10 == b*5)
	{
		cout<<"ANY"<<"\n";
	}
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