#include <bits/stdc++.h>
using namespace std;
#define _fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

// https://leetcode.com/problems/remove-duplicates-from-sorted-array/


/**
 * solution: 
 * class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uni = 1, curr= nums[0];
        for(int i =1 ; i<nums.size(); i++)
        {
            if(nums[i]>curr)
            {
                nums[uni] = nums[i];
                uni++;
                curr = nums[i];
            }
        }
        return uni++;
    }
};

another solution using stl functions: 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
*/