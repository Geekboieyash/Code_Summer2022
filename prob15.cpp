#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
int main()
{
    _fast;
    int t;
    cin>>t;
    while(t--)
    {
    	int x,y;
    	cin>>x>>y;
    	int a = y-x ;
    	if (a > 0)
    	{
    		if (a<8 || a == 8)
    		{
    			cout<<"1"<<"\n";
    		}
    		else if (a % 8 == 0)
    		{
    			int b = a/8;
    			cout<<b<<"\n";
    		}
    		else
    		{
    			int b = a/8 + 1;
    			cout<<b<<"\n";    		}
    	}
    	else cout<<"0"<<"\n";
    }
    return 0;
}