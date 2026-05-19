// Problem: Linked list cycle 2 
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(1) 

//   Definition for singly-linked list.

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(nullptr) {}
  };
 

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        bool isCycle = false;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                isCycle = true;
                break;
            }
        }
       if(!isCycle)
       {
            return NULL;
       }

       slow = head;
       while(slow != fast)
       {
        slow = slow->next;
        fast = fast->next;
       }
       return slow;
    }
};