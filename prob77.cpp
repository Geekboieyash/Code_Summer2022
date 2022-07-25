//https://www.codechef.com/JULY222D/problems/DIVAB
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    int flag = 1 ;
    int num,x = n/a;
    if(b%a == 0 || a%b == 0) cout<<"-1\n";
    
    else if(n%a == 0 && n%b != 0) cout<<n<<"\n";
    while(flag!= 0)
    {
        num = x*a;
        if(num >= n && (num)%b != 0){ cout<<num<<"\n";
        flag = 0;}
        else x++;
    }
}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt","w", stdout);
freopen("input.txt ","r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}