//https://www.codechef.com/submit/MONKS
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
    vll v(n);
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin>>v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
    	cnt = cnt + v[i];
    	arr[i]=cnt;
    }
    int flag = 1;
    int a = n;
    while(flag)
    {
    	int i = a-1;
    	int x = v[i-1];
    	int y = arr[n-2];
    	int z = (a-1)*v[i-2];
    	if(x >= (y-z))
    	{
    			flag = 0;
    	}
    	else
    	{
    		a--;
    	}
    }
    cout<<a<<"\n";
    

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