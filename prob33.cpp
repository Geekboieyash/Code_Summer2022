//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/
/**
 * wrong solution-- > 
 * testcasse : 
 * [11,49,100,20,86,29,72] 4
 * Output : 207
 * expected : 232
 * 
 * window sliding technique 
 * 
 * class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int sum = 0;
        if(k == n)
        {
            int i=0;
            while(n--)
            {
                
                sum += cardPoints[i];
                i++;
            }
        }
        if(k < n)
        {
            int x = n-1;
            int i= 0;
            while(k--)
            {
                if(cardPoints[i] > cardPoints[x])
                {
                    sum += cardPoints[i];
                    i++;
                }
                else if(cardPoints[i] < cardPoints[x])
                {
                    sum += cardPoints[x];
                    x--;
                }
                else if (cardPoints[i] == cardPoints[x])
                {
                    if(cardPoints[i+1] > cardPoints[x-1])
                {
                    sum += cardPoints[i];
                    i++;
                }
                else if(cardPoints[i+1] < cardPoints[x-1])
                {
                    sum += cardPoints[x];
                    x--;
                }
                else
                {
                    sum += cardPoints[x];
                    x--;i++;
                }
                }
            }
        }
        return sum;
    }
};
*/
