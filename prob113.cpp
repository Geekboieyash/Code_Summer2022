//https://www.codechef.com/START57C/problems/MAXEXP
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
    int n; cin>>n;
    string s; cin>>s;
    int plus =0, minus=0, d = 0;
    int di[10] = {0};
    for (int i = 0; i < n; ++i)
    {
    	if(s[i]=='+')
    	{
    		plus++;
    	}
    	else if(s[i] == '-')
    	{
    		minus++;
    	}
    	else
    	{
    		di[s[i] - '0']++;
    		d++;
    	}
    }
    string x = "";
    int  i = 9;
    while(d-(plus+minus)){
    	if(di[i] == 0){
             i--;
            continue;
        }
        x += ('0'+i);
        di[i]--;
        d--;
      }
      while(plus){
        if(di[i] == 0){
            i--;
            continue;
          }
        x += '+';
        x += ('0'+i);
        di[i]--;
        plus--;
      }
      while(minus){
          if(di[i] == 0){
              i--;
              continue;
          }
          x += '-';
          x += ('0'+i);
          di[i]--;
          minus--;
      }
      cout<<x<<"\n";
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