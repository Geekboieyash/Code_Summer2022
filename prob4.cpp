#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
int main()
{
    _fast;
    unordered_map<int , int> m;
    int a[] = {1,2,3,1,4,5,2};

    for (int i = 0; i < a.size(); ++i)
    {
    	m[a[i]]++;

    }


    int vector<int> v;

    for(auto x: m)
    {
    	int p = x.first;
    	int q = x.second;

    	if( q == 1) v.push_back(p);
    }

    for (int i = 0; i < v.size; ++i)
    {
    	cout<<v[i]<<" ";
    }


    return 0;
}