//
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define loop(i,a,b) for(ll i=a; i<b; i++)
#define revloop(i,a,b) for(ll i=a; i>b; i--)
#define pb push_back
#define srt(v) sort(v.begin(), v.end())

void solve()
{
    int n,k;
    cin>>n>>k;
   if(n%k == 0) cout<<"1\n";
   else if(k%n == 0) cout<<k/n<<"\n";
   else if(n>k) cout<<"2\n";
   else cout<<(k/n)+1<<"\n";


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