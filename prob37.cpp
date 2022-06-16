//https://www.codechef.com/submit-v2/DISTGCD?tab=submissions
#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back

void solve()
{
    int a,b;cin>>a>>b;
    if(abs(a-b) == 1) cout<<"1"<<"\n";
    else
    {
    int n = abs(a-b); 
    int ans = 0;
    // on applying this full for loop we will get tle 

    // for (int i = 1; i <= n; i++)
    // {
    //     if( n%i == 0) ans++;
    // }
    // now more optimised for loop
    for(int i=1;i*i<=n;i++)
    {
	        if(n%i==0){
	            ans++;
	            if(i!=n/i)ans++;
	        }
	       
	    }
    cout<<ans<<"\n";
    }

}



int main()
{
    _fast;
#ifndef ONLINE_JUDGE
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}