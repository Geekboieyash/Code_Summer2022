//https://www.codechef.com/START48D/problems/GRIDBL
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,m;cin>>n>>m;
    if(n%2 == 0 && m%2 == 0) cout<<"0\n";
    else{
        if(n%2 == 0 && m%2 != 0)
        {
            int a = m-1;
            int area1 = n*m;
            int area2 = n*a;
            cout<<area1-area2<<"\n";
        }
        else if(m%2 == 0 && n%2 != 0)
        {
            int a = n-1;
            int area1 = n*m;
            int area2 = m*a;
            cout<<area1-area2<<"\n";
        }
        else if(n%2 !=0 && m%2 != 0)
        {
            int a = n-1;
            int b = m-1;
            int area1 = n*m;
            int area2 = a*b;
            cout<<area1-area2<<"\n";

        }
    }

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