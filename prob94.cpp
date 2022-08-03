//https://www.codechef.com/START50D/problems/SUMPRODSEG
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int x,y;
    cin>>x>>y;
    if(y/x > x)
    {
    	if(y%x == 0)
    	{
    		int a = y/x;
    		cout<<x<<" "<<a<<"\n";
    		cout<<"1 "<<x-1<<"\n";
    	}
    	

    } 
    else cout<<"-1\n";
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