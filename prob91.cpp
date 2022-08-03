// triple sum 
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back

void solve()
{
    int n,k; cin>>n>>k;
    vll v(n);
    // first pointer second pointer thrid pointer like binary sort?
    // 12, 3, 4, 1, 6, 9 || sum =  24 => 1,3,4,6,9,12
    sort(v.begin(), v.end());
    // int f = 0, l=n-1, mid=0;
    // while(f<l)
    // {
    // 	mid = (l+f)/2;
    // 	for (int i = f; i < l; ++i)
    // 	{
    // 		if(l+f+mid == k)
    // 		{
    // 			cout<<"ho gya\n";
    // 		}
    // 		else mid++;
    // 	}
    // 	f++;
    //}
    int f=0,l=n-1;
    // minus 
    
    


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