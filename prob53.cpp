//https://www.codechef.com/submit/PAIREQ
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n;
    cin>>n;
    vector<int> v;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        v.push_back(x);
        mp[v[i]]++;
    }
    int itt=0;
    for(auto i: mp)
    {
        if(i.second > itt)
        {
            itt = i.second;
        }
    }
   // cout<<"the frequescy is :  "<<itt<<"\t";
    if(itt > 1 && itt != n)
    {
        int x = n - itt;
        cout<<x<<"\n";
    }
    else if(itt >= n)
    {
        cout<<"0"<<"\n";
    }
    else if( itt == 1)
    {
        cout<<n-1<<"\n";
    }



    

    
}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt"," w", stdout);
freopen("input.txt"," r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}