#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define loop(i,a,b) for(ll i=a; i<=b; i++)
#define revloop(i,a,b) for(ll i=a; i>=b; i--)
#define pb push_back

void solve()
{
    int a,b; cin>>a>>b;
    if(a>b){
        float x = a/b;
        int r = b%a;
        float y = log2(x);
        int z = y;
        //cout<<x<<" "<<y<<" "<<z<<" ";
        if(y == z && r==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else
    {
        float x = b/a;
        int r = b%a;
        float y = log2(x);
        int z = y;
       // cout<<x<<" "<<y<<" "<<z<<" ";
        if(y == z && r==0) cout<<"YES\n";
        else cout<<"NO\n";
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