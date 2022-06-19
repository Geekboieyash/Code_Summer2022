//https://codeforces.com/contest/1695
// not solved 

#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int n,m ; 
    cin>>n>>m;
    int arr[n][m];
    int max_ele = -N;
    int x=0,y = 0;
    for(int i = 1; i<= n; i++)
    {
        for(int j =1; j<= m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] > max_ele)
            {
                max_ele = arr[i][j];
                x = i; y = j;
            }
        }
    }
    if( n ==2 && m == 2) {cout<<"4"<<"\n";}
    else{
    if(x != n && y != m)
    {
        x = max(x,n-x); y = max(y,m-y);
        int area = max(x,y)* max(x,y);
        cout<<area<<"\n";
    }
    else{ cout<<n*m<<"\n";}
    }
   



}
int main()
{
    _fast;
#ifndef ONLINE_JUDGE
freopen("output.txt"," w", stdout);
freopen("input.txt", "r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}