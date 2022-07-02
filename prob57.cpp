//https://www.codechef.com/submit/EVEQODD
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
/**
 * O=E, the answer is zero.
 * O>E, we need to change (O - E)/2(O−E)/2 odd numbers to even numbers. 
This will require a minimum of (O - E)/2(O−E)/2 operations.
 * E>O, we need to change (E - O)/2(E−O)/2 even numbers to odd numbers. We will choose the even
 numbers with the least BB's to be changed to odd numbers for the least number of operations. So, the answer is the sum of (E - O)/2(E−O)/2 minimum elements in array DD.
*/


void solve()
{
    int n;cin>>n;
    n *= 2;
    int odd = 0; int even = 0;
    vll v(n);
    vll mk_o;
    for (int i = 0; i < n ; i++)
    {
        int y; cin>>y;
        v.push_back(y);
        if(y%2) odd++;
        else
        {
            even++;
            int x = 0 ;
            while(y%2 == 0)
            {
                x++;
                y/=2;
            }
            mk_o.push_back(x);
        }
    }
  
    sort(mk_o.begin(), mk_o.end());
    if(odd>=even )
    {
        cout<<(odd-even)/2<<"\n";
    }

    else{
        int ans=0;
        for(int i = 0 ; i < (even - odd)/2; i++) ans += mk_o[i];
        cout<<ans<<"\n";
    }
    

    
}
int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt", "w", stdout);
freopen("input.txt", "r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}