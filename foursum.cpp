#include <bits/stdc++.h>
//https://www.geeksforgeeks.org/find-four-elements-that-sum-to-a-given-value-set-2/
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    vector<int> myvector;
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(1);
    myvector.push_back(7);
    myvector.push_back(2);
    // Vector becomes 3, 4, 1, 7, 2
    int n  = myvector.size();
    for (int i = 0; i < n; ++i)
    {
    	cout << myvector.back();    
    myvector.pop_back();
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