#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
int main()
{
    _fast;
    unordered_map<int , int> m;
    int a[] = {1,2,1,1,3,3,4,3,3,5,4,1};

    for (int i = 0; i < 12; ++i)
    {
    	m[a[i]]++;

    }


    vector<int> v;

    for(auto x: m)
    {
    	int p = x.first;
    	int q = x.second;

    	if( q == 3) v.push_back(p);
    }

   cout<<v[0]<<endl;

    return 0;
}