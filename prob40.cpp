//https://www.codechef.com/START43D/problems/DISPAL
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,x; cin>>n>>x;
    int min_len = 2*x-1;
    if(n < min_len)
    {
        cout<<"-1"<<"\n";
        return;
    }

    string ans = string(n, 'a'); // store a for all n value 
    for (int i = 1; i < x; i++)
    {
        // now we will simply change the value according to the number of distinct character want
        ans[i-1] = 'a' +i;
        ans[n-1] = 'a' +i;
    }
    cout<<ans<<"\n";
    

}
int main()
{
    _INVINCI;
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