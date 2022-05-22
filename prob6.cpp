#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

void solve(){
	int n,k;

	if(k == 0)
	{
		if (n % 4 == 0)
		{
			cout<<"Off"<<"\n";
		}
		else cout<<"On"<<"\n";
	}
	else if(k == 1)
	{
		if (n%4 == 0)
		{
			cout<<"On"<<"\n";
		}
		else cout<<"Ambiguous"<<"\n";
	}
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