//https://www.codechef.com/LTIME109D/problems/ZOOZ
#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
    int count; cin>>count;
    if(count%2 == 0)
    {
        int a = count/2;
        for (int i = 0; i < count; i++)
        {
            if(i<a)
            {
                if(i%2 == 0) cout<<"0";
                else cout<<"1";
            }
            else{
                if(i%2 == 0) cout<<"1";
                else cout<<"0";
            }
        }
        cout<<"\n";
        
    }
    else{
        int a = count/2;
        for (int i = 0; i < count; i++)
        {
            if(i<a)
            {
                if(i%2 == 0) cout<<"1";
                else cout<<"0";
            }
            else if(i == a && a%2 == 0)
            {
                cout<<"1";
            }
            else if(i == a && a%2 != 0)
            {
                cout<<"0";
            }
            else if(i>a)
            {
                if(i%2 == 0) cout<<"1";
                else cout<<"0";
            }
        }
        cout<<"\n";
    }
        
    

}

int main()
{
    _INVINCI;
#ifndef ONLINE_JUDGE
freopen("output.txt","w", stdout);
freopen("input.txt", "r", stdin);
#endif
    int t; cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}