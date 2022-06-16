#include <bits/stdc++.h>
using namespace std;
#define _fast                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N = 1e5 + 11, mod = 1e9 + 7;
#define pb push_back
void solve()
{
    int n;
    cin >> n;
    if (n % 3 == 0)
    {
        int a = n / 3;
        cout << a << " " << a + 1 << " " << a - 1 << "\n";
    }
    else
    {
        int a = n / 3;
        int rem = n % 3;
        int x = a-1;
        int y = a-2;
        
        if(a+1 < a+rem && x>0) cout<<a+1<<" "<<a+rem<<" "<<a-1<<"\n";
        if(a+1 == a+rem && y>0) cout<<a+1<<" "<<a+rem+1<<" "<<a-2<<"\n";
        if( n == 7)
        {
            cout<<"2 4 1"<<"\n";
        }

    }
    // if(a+1 < a+rem) cout<<a+1<<" "<<a+rem<<" "<<a-1<<"\n";
    // if(a+1 == a+rem || a+1>a+rem) cout<<a+1<<" "<<a+rem+1<<" "<<a-2<<"\n";
}
int main()
{
    _fast;
#ifndef ONLINE_JUDGE
    freopen("output.txt", "w", stdout);
    freopen("input.txt", " r", stdin);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}