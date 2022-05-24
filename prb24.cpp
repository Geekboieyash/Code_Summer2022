//https://leetcode.com/problems/subarray-sums-divisible-by-k/



/*   brute force solution:
  

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int a = 0;
        int n = nums.size();
        int out = 0 ;
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j = i; j<n; j++)
            {
              
                sum += nums[j];
                if(sum%k==0)
                {
                    out += 1;
                }
            }
        }
        
    return out;


*/


/*
//2. better-O(N),AS-O(N) - use of hashmap to store the remainder of cumulative sum for each index 


solution using hashmap

in this there are two thing to note 
1 when reminder gets negative we usually add k back in it 
2 comparsion we do in map 

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size();
        map<int, int> m;
        m[0] = 1;
        int s = 0, count = 0;
    
        for(int i =0 ; i<n ; i++)
        {
            int rem = 0;
            s += nums[i];
            rem = s%k;
            if(rem<0) rem += k;
            
            if(m.find(rem) != m.end())
            {
                count += m[rem];
            }
            m[rem] += 1;
            
        }
        return count;
    }
};


*/