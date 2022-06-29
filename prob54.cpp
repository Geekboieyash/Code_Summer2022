#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back

int fib(int n, int x)
{
    if(n<= 1) return x ;
    return fib(n-1,x) + fib(n-2,x);
}

void solve()
{
    int n,x; cin>>n>>x;
    int cal = fib(n,x);
    
  
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