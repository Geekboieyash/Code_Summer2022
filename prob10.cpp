#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve()
{
	int n,temp=0,sum = 0;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>temp;
		arr[i] = temp ;
		sum = temp + sum;
	}
	float mean = sum/n;
	cout<<mean<<"\n";

}




int main()
{
    _fast;
    int t;
    cin>>t;
    while(t--)
    {
    	solve();
    }
    return 0;
}