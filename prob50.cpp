#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
void solve(string str)
{
    map<char, int> count ;
    for(int i = 0; i< str.length(); i++)
    {
        count[str[i]]++;
    } 
    for(auto it: count)
    {
        if(it.second > 1)
        {
            cout<<it.first<<" , count = "<<it.second;
            cout<<"\n";
        }
    }
}
int main()
{
    _INVINCI;
    string str = "test string ";
    solve(str);
    return 0;
}