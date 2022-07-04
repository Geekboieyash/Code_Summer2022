#include <bits/stdc++.h>
using namespace std;
#define _INVINCI ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back
class Solution{
    public:
     bool checkForCycle(int node, int parent, vector<int> &vis, vector<int> adj[])
     {
        vis[node] =1;
        for(auto it: adj[node])
        {
            if(vis[it]==0)
            {
                if(checkForCycle(it, node, vis, adj)) return true; 
            }
            else if((it != parent)) return true;
        }
        return false;
     }

    public:
     bool isCycle(int V, vector<int>adj[])
     {

        vector<int> vis(V+1,0);
        for(int i=1; i<= V; i++)
        {
            if(!vis[i]){
                if(checkForCycle(i, -1, vis, adj)) return true;
            }
        }
        return false;
     }
};



int main()
{
    _INVINCI;
    int tc; 
    cin>>tc;
    while(tc--)
    {
        int V, E;
        cin>>V>>E;
        vector<int>adj[V];
        for(int i = 0; i< E; i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V,adj);
        if(ans)
         cout<<"1\n";
        else cout<<"0\n";

    }
    return 0;
}