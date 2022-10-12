//https://codeforces.com/contest/1741/problem/0
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
    string s,a;
    cin>>s>>a;
    int n1 = s.size();
    int n2 = a.size();
   int ans1 = 0, ans2 = 0;
   for (int i = ans1-2; i <= 0; i--)
   {
   	if(s[ans1-1] == 'S' && s[i] == 'X')
   	{
   		ans1  -= (10);
   	}
   	else 
   	{
   		ans1 += 10;
   	}
   	
   }
   for (int i = ans2-1; i <= 0; i--)
   {
   	if(a[ans2-1] == 'S' && a[i] == 'X')
   	{
   		ans2  -= (10);
   	}
   	else 
   	{
   		ans2 += 10;
   	}
   }
   if(ans1 == ans2)
   {
   	cout<<"=\n";
   }
   else if(ans1 > ans2)
   {
   	cout<<">\n";
   }
   else if(ans1 < ans2)
   {
   	cout<<"<\n";
   }
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