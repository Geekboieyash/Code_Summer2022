//https://www.codechef.com/submit-v2/MAKEZERO
#include <bits/stdc++.h>
using namespace std;
#define _fast                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N = 1e5 + 11, mod = 1e9 + 7;
#define pb push_back
void solve()
{
    int n;cin>>n;
    int flag = 0;
    vector<int> a;
    for(int i =0 ; i<n; i++)
    {
        int x;
        cin>>x;
        if( x%2 == 0)
        {
            a.push_back(x);
        }
        else{
            flag = 1; 
            x = x-1;
            a.push_back(x);
        }

    }
    if(flag == 0)
    {
    int ans  = a[n-1]/2;
    cout<<ans<<"\n";
    }
    else{
        int ans = 1 +a[n-1]/2;
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}