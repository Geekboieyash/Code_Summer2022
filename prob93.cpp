#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n;
    cin>>n;
   for (int i = n; i >= 1; i--)
   {
   	if(i%2 != 0) cout<<i<<" ";
   }
   for (int i = 1; i <= n; i++)
   {
   	if(i%2 == 0) cout<<i<<" ";
   }
   cout<<"\n";

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