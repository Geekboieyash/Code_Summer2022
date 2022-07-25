#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long 
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve()
{
	int n,m;
	cin>>n>>m;
	int temp, tamp, a,min;
	if(m<2*n) cout<<m<<" "<<m<<"\n";
	else if(m>=2*n && m%n==0) cout<<m<<" "<<n<<"\n";
	else
	{
		// a = m/2;
		// if(m>=2*n)a = 2*n;
		// min = INT_MIN;
		// for(int i=n; i<=a ;i++)
		// {
		// 	int x = m/i;
		// 	int dif = (i*x) -i;
		// 	if(dif > min)
		// 	{
		// 		temp = i;
		// 		tamp = m/i;
		// 	}
		// }
		// cout<<temp<<" "<<tamp<<"\n";
		int x = m/2;
		if(m>=2*n)cout<<m<<" "<<m<<"\n";
		else if(m>=2*n && m%n == 0) cout<<m<<" "<<n<<"\n";
		else{
			int x = m/2;
			if(m>=2*n)
			{
				x = 2*n;
			}
			int diff = INT_MIN;
			for(int i =n; i<=x; i++)
			{
				int d = m/i;
				int curdiff = (i*d) -i;
				if(curdiff>diff)
				{
					temp=i;
					tamp=i*d;
					diff = curdiff;
				}
			}
		//	cout<<temp<<"bsd"<<tamp<<"\n";
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