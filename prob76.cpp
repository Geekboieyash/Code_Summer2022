//https://www.codechef.com/START48D/problems/MAKEPAL2
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    //int a = n;
    int one= 0,zero=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0') zero++;
        else one++;
    }

    if(one>zero)
    {
        for(int i = 0; i < one; i++)
        {
           cout<<"1"; 
        }
        
    }
    else{
        for (int i = 0; i < zero; i++)
        {
            cout<<"0";
        }
        
    }
    cout<<"\n";
    
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