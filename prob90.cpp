#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
	int n; cin>>n;
	int k; cin>>k;
    vll v(n);
    sort(v.begin(), v.end());
    int p1=0,p2=n-1;

    while(p1<p2)
    {
    	if(v[p1] + v[p2] == k)
    	{
    		cout<<"mil gya"<<"\n";
    	}
    	else if( v[p1] + v[p2] < k)
    	{
    		p1++;
    	}
    	else p2--;
    }

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