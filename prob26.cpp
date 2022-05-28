#include <iostream>
#include <unordered_map>
//https://leetcode.com/problems/find-all-duplicates-in-an-array/submissions/
using namespace std;
void getDuplicate(int arr[], int n)
{
    unordered_map<int,int> freq;
    for(int index=0;index<n;index++)
        freq[arr[index]]++;
    bool duplicate=false;
    unordered_map<int,int> :: iterator itr;
    for(itr=freq.begin();itr!=freq.end();itr++)
    {
        if(itr->second > 1)
        {
            cout<<itr->first<<" ";
            duplicate=true;
        }
    }
    if(!duplicate)
        cout<<"-1"<<endl;
}
int main()
{
    int arr[]={4,3,2,7,8,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    getDuplicate(arr,n);
    return 0;
}


//
/*
 class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i =0 ; i<n ; i++)
        {
            freq[nums[i]]++;
        }
        vector<int> result;
        int i=0;
        
        for(auto i: freq)
        {
            if(i.second>1)
            {
                result.push_back(i.first);
            }
        }
        
        return result;
            
            
    }
};


*/