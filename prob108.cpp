//https://www.codechef.com/submit/HP18
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
    ll n,a,b;
    cin>>n>>a>>b;
    ll a_count =0, b_count=0;
    //vll v(n);
    while(n--) {
    	int x; cin>>x;
    	if(x%a==0) a_count++;
    	if(x%b==0) b_count++;
    	//if(x%(a*b)==0) {c++;}
    	//v.push_back(x);
    }
    if(a%b==0){cout<<"BOB\n";}

    //cout<<a_count<<" "<<b_count<<"\n";
 
    if(a_count<b_count) cout<<"ALICE\n";
    else cout<<"BOB\n";

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