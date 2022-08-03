//https://www.codechef.com/START50D/problems/PERMGCD
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,x;
    cin>>n>>x;
    //if(x<n) cout<<"-1\n";
    // vll v(n);
    // for (int i = 1; i <= n; ++i)
    // {
    // 	v.pb(i);
    // }

    if(x>=n)
    {

    	cout<<x-n+1<<" ";
    	for (int i = 1; i <= n; i++)
    	{
    		if(i != x-n+1)
    		{
    			cout<<i<<" ";
    		}
    	}

    }
    else cout<<"-1";
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