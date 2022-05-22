#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

//https://codeforces.com/contest/1660/problem/A


void solve()
{
	int a,b;
	cin>>a>>b;
	int total = a*1 + b*2;
	if(a == 0)
	{
		cout<<"0"<<"\n";
	}
	else if(b == 0) cout<<a+1<<"\n";
	else cout<<total+1<<"\n";
	
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