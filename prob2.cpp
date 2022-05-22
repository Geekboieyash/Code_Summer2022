#include <bits/stdc++.h>
using namespace std;
#define _fast                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long int

void solve()
{
    int N,X;
	cin >> N >> X;
   
	int A[N];
	int ma = 100000000;
	for(int i=0;i<N;i++){
		cin >> A[i];
		ma = min(A[i],ma);
	}
	int t = 0;
	if(X%ma==0)
		t = X/ma;
	else
		t = (X/ma)+1;
	int ans = N;

	ans = max(N,t);
	cout << ans << endl;
}

int main()
{
    _fast;
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}