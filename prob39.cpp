//https://www.codechef.com/START43D/problems/JOINING
#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,x; cin>>n>>x;
    int set = 0,kset = 0 ;
    if(n%5 == 0) {set = n/5;} //kset = x/5;}
    else
    {
        set = n/5 + 1; //kset = x/5 + 1;
    }
    if(x%5 == 0) kset = x/5;
    else kset = x/5 + 1;
    //cout<<"the kset is : "<<kset<<"\n";
    
    cout<<set - kset<<"\n";

    
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