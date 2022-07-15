//https://codeforces.com/contest/1703/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n ;cin>>n;
    string s ;
    cin>>s;
    unordered_map<char, int> mp;
    // string insert in map 
    for(int i = 0; i<n; i++)
    {
        char a = s[i];
        mp[a]++;
    }
    int total = 0;
    // iteration in map 
    //if character a -> 1 then +2 if >1 then it->second * 1 + 1
    for(auto it = mp.begin(); it != mp.end(); ++it)
    {
        total = total + it->second + 1;
    }
    cout<<total<<"\n";

    
    



}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt","w", stdout);
freopen("input.txt" ,"r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}