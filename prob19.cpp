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
    	int n;
    	cin>>n;
    	int max = 0;
    	for (int i = 0; i < 4; i++)
    	{
    		int x ;
    		cin>>x;
    		if (x > max)
    		{
    			max = x;
    		}
    	}
    	cout<<max<<"\n";
    }

    
    return 0;
}