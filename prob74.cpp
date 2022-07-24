//https://www.codechef.com/JULY222D/problems/BURGERS2
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int a,b,n,r;
    cin>>a>>b>>n>>r;
    int x = r-n*a ; 
    int y = b-a;
    x = x/y;
    if(x > n) cout<<"0 "<<n<<"\n";
    if(x<0) cout<<"-1\n";
    if(x>=0 && x<n) cout<<n-x<<" "<< x<<"\n";
    //cout<<x<<'\n'; // if x  less than 0 than output -1 and if greater than then output 0 n    
}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt","w", stdout);
freopen("input.txt ","r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}