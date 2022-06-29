//https://www.codechef.com/JUNE222D/problems/REVSORT

#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,x;
    cin>>n>>x;
    // sort array in revese order 
    vector<int> v;
    
    for(int i=0; i<n; i++)
    {
        int y; cin>>y;
        v.push_back(y);
        int z;
        if(i==0)
        {
            z = y;
        }
        
    }
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