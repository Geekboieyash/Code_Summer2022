
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
 int a, b; cin>>a>>b;
 if(a==b){
 	if(a%2 == 0)
 	{
 		cout<<"CHEFINA\n";
 	}
 	else
 	{
 		cout<<"CHEF\n";
 	}
 }
 if(a>b){
 	if(a-b>=2)
 	{
 		cout<<"CHEF\n";
 	}
 	else
 	{
 		if(a%2 == 0)
 		{
 			cout<<"CHEF\n";
 		}
 		else{
 			cout<<"CHEFINA\n";
 		}
 	}
 }   
 if(b>a){
 	if(b-a>=2)
 	{
 		cout<<"CHEFINA\n";
 	}
 	else
 	{
 		if(a%2 == 0)
 		{
 			cout<<"CHEFINA\n";
 		}
 		else{
 			cout<<"CHEF\n";
 		}
 	}
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