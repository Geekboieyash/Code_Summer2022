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
 vector<string> v(8);
 for (int i = 0; i < 8; ++i)
 {
 	cin>>v[i];
 }
 int flag = 0;
 for (int i = 0; i < 8; ++i)
 {
 	string s1("RRRRRRRR");
 		if (v[i] == s1)
 		{
 			flag =1;
 		}
 }

 if(flag == 1)
 	{cout<<"R\n";}
 else cout<<"B\n";
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