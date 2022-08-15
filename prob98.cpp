//https://www.codechef.com/AUG221D/problems/TWOTRAINS
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define loop(i,a,b) for(ll i=a; i<b; i++)
#define revloop(i,a,b) for(ll i=a; i>b; i--)
#define pb push_back

void solve()
{
    int a,b; cin>>a>>b;
   // if(a == b) cout<<"YES\n"; return;
    if(a>b){
        loop(i,1,6) {
        	int x = pow(2,i);
        	if(x*b == a)
        	{
        		cout<<"YES\n";
        		return;
        	}
        }
        cout<<"NO\n";
    }
    else if(b>a)
    {	
        loop(i,1,6) {
        	int x = pow(2,i);
        	
        	if(x*a == b)
        	{
        		cout<<"YES\n";
        		return;
        	}
        }
        cout<<"NO\n";
    }
    else if(a==b)
    {
    	cout<<"YES\n";
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