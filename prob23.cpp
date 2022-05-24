//https://www.codechef.com/MAY222D/problems/XOR_PAL

#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back

void solve()
{
    int n;
    cin>>n;
    int a = 0;
    string pal;
    cin>>pal;
    for (int i = 0; i < n/2; i++)
    {
        if (pal[i] != pal[n-1-i])
        {
            a++;
        }
    }
    cout<<(a+1)/2<<"\n"; // a+1/2 have catch of no of op to be preformed 
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