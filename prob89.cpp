//https://codeforces.com/contest/1704/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,m,x1=0,y1=0,x2=0,y2 = 0;
    cin>>n>>m;
    string v,a;
    cin>>v>>a;

    for (int i = 0; i < n; ++i)
    {
    	
    	if (v[i] == '0')
    	{
    		y1++;
    	}
    	else x1++;
    }
    for (int i = 0; i < m; ++i)
    {
    	
    	if (a[i] == '0')
    	{
    		y2++;
    	}
    	else x2++;
    }
    int c1 = v[0],  c2 = v[n-1], c3 = a[0], c4 = a[m-1];
    cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<"\n";
     if(c1 == c3 && c2 == c4)
     	{
     		cout<<"YES\n";
     	}
     else cout<<"NO\n";

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