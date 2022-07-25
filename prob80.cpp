//https://codeforces.com/contest/1711/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{   
	ll n;cin>>n;
	if(n == 1)cout<<"1";

	else{
	for(ll i = 1; i<=n; i++)
	{
		if(i == 1) cout<<"2 ";
		else if(i==n) cout<<"1 ";
		else{
			cout<<i+1<<" ";
		}

	}	
	}
	cout<<"\n";


}

int main()
{
    _INVINCI;
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}