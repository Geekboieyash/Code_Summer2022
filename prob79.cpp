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

    if(a%b == 0) cout<<"-1\n";
    else{
        if(n%a == 0)
        {
            if(n%b == 0)
            {
                x++;
            }
            cout<<x*a<<"\n";
        }
        else
        {
            x++;
            num = x*a;
            if(num%b == 0){
                x++;
            }
            num = x*a;
            cout<<num<<"\n";
        }
    }
    // if(b%a == 0 || a%b == 0)cout<<"-1\n";
    
  

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