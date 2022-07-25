//https://www.codechef.com/JULY222D/problems/SUMOFPROD1
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
    vll v(n);
    vll r;
    ll cns=0;
    ll temp = 0; //no of one's
    for(ll i=0; i<n; i++) {
    	cin>>v[i];
    	// if(v[i] == 1) temp++;
    	// if(temp == n)
    	// {
    	// 	int x = ((temp)*(temp+1));
    	// 	temp = temp+n;
    	// }
    	// else{
    	// if(i>0 && v[i-1] == 1 && v[i]==1)
    	// {
    	// 	cns++;
    	// }
    	// if(cns>0 && v[i] == 0)
    	// {
    		
    	// 	int x = ((cns+1)*(cns))/2;
    	// 	cout<<x<<" ";
    	// 	temp = temp + x;
    	// 	cns = 0;

    	// }
    	if(v[i] == 1)
    		cns++;
    	else cns = 0;
    	temp = temp + cns;
    
    }
    cout<<temp<<"\n";
    

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