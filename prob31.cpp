//https://www.codechef.com/START41C/problems/WINNERR
#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
  
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x = max(a,b);
    int y = max(c,d);
    if(x>y)
    {
        cout<<"Q"<<"\n";
    }
    else if(y>x)
    {
        cout<<"P"<<"\n";
    }
    else cout<<"TIE"<<"\n";

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