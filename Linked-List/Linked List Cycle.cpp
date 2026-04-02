// Problem: Linked list cycle
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(1)  


//  Definition for singly-linked list.
struct ListNode {
    int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
};
 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};