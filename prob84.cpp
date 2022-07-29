#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int equal=0;
    if(a==b) equal++;
    if(b==c) equal++;
    if(c==a) equal++;
    if(equal==3)cout<<"YES\n";
    if(equal==0)cout<<"NO\n";
   
    if(equal == 1)
    {
    	if(a==b ){ 
    		if(a<c) cout<<"YES\n";
    		else cout<<"NO\n";
    	}
    	if(b==c)
    	{
    		if(a>c) cout<<"YES\n";
    		else cout<<"NO\n";
    	}
    
    	if(a==c){
    		if(c<b) cout<<"YES\n";
    		else cout<<"NO\n";
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