//https://www.codechef.com/AUG221D/problems/HLEQN
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define loop(i,a,b) for(ll i=a; i<b; i++)
#define revloop(i,a,b) for(ll i=a; i>=b; i--)
#define pb push_back

void solve()
{
    int x; cin>>x;
    int n = sqrt(x);
    int a,b;
    loop(i,1,n)
    {
    	int y = x - 2*i;
    	if(y%(2+i) == 0)
    	{
    		cout<<"YES\n";
    	

    		return ; 	
    	}
    	
    }
    cout<<"NO\n";

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