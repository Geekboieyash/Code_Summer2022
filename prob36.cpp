//https://www.codechef.com/submit-v2/ALTERADD?tab=statement
#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int a,b; cin>>a>>b;
    // 1,2,1,2,
    if((b-a)%3 == 0 || (b-a-1)%3 == 0) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
}
int main()
{
    _fast;

    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}