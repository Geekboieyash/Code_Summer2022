// this is about stl 

#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define vll vector<ll>
const int N=1e5+11,mod=1e9+7;
#define pb push_back

int main()
{
    _fast;
   // set ;
   set<int> st;
   int n; cin>>n;
   for (int i = 0; i < n; i++)
   {
       /* code */
       int x;
       cin>>x;
       st.insert(x);
   }
   // eg set = {1,2,5}
   st.erase(st.begin()); //st.erase(iterator)  
   st.erase(st.begin(), st.begin()++); //{5}
   // erase by using key 
   st.erase(5);
   // find  function
   set<int> st = {1,2,3,4,5,7};
   auto it = st.find(7); // log n //it will be iterator to 7
   auto it = st.find(9); // it = st.end()

   // emplace fun simillar to insert but faster than it 

   st.emplace(9);
   // set of anything can be define 
   //only one condition that every value should be unique
   set<int> st;
   st.insert(5); // -> {5}
   st.insert(5); // -> {5}
   
   // print set

   for(auto it=st.begin(); it!= st.end(); it++)
   {
       cout<<*it<<" ";
   }
   for(auto it : st)
   {cout<<it <<endl;}

   // delete the entire set 
   st.erase(st.begin(), st.end());
   // all operation of set are of log(n);

   unordered_set<int> st; 
   st.insert(2);
   st.insert(1) ;
   // in unordere set elements are not set in acending ordered
   // average time o(n)
   // worst case is linear in nature, o{set size}
   //tle -> switch to set 

   return 0;
}