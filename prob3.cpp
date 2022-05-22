#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
int main()
{
    _fast;

    int a[] = {1,2,1,3,4,5};
    set<int> s;
    for(int i:a)
    {
    	s.insert(i);
    }
    for(int i: s) cout<<i<<" ";
    
    return 0;
}