// https://leetcode.com/problems/add-two-numbers/



/* * 
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<ListNode*> v1,v2;
        ListNode*curr1 = l1;
        ListNode*curr2 = l2;
        //int i=0,j = 0;
        while(curr1)
        {
             v1.push_back(curr1);
            //v2[i] = curr2;
            curr1 = curr1->next;
            //curr2 = curr2->next;
        
        }
        
        while(curr2)
        {
            v2.push_back(curr2);
            curr2 = curr2->next;
        }
        // will keep v1 size bigger than v2
        if(v2.size() > v1.size())
        {
            v2.swap(v1);
        }
        int s = v2.size(), rem = 0;
        for(int i = 0; i<v1.size(); i++)
        {
            if(i<s)
            {
                int x = v1[i]->val;
                int y = v2[i]->val;
                int z = (x+y+rem)%10;
                rem = (x+y+rem)/10;
                v1[i]->val = z;
                
            }
            else
            {
                int x = v1[i]->val;
                int z = (x+rem)%10;
                rem = (x+rem)/10;
                v1[i]->val = z;
                
            }        
        }
           if(rem > 0)
            {
                ListNode* node = new ListNode();
                node->next = NULL;
                node->val = rem;
                int j = v1.size();
                v1[j-1]->next = node; 
                
            }
        
        return v1[0];
        

    }
};
 */