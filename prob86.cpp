#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
 int a,b;
 cin>>a>>b;
 int x=0,y=0;
 string s;cin>>s;
 for(int i = 0; i<a; i++)
 {
 	if(s[i] == '1') x++;
 	else y++;
 }   
 int diff = abs(x-y);
 int ans = 0;
 if(diff%b)
 {
 	ans++;
 }

 diff /= b;
 diff += ans;

 cout<<diff<<"\n";

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