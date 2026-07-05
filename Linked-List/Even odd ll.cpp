// Problem: Even odd linked list
// Platform: LeetCode
// Time Complexity: O(n)
// Space Complexity: O(n) 


//Definition for singly-linked list.
struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//  */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* temp = head;
        vector <int> v1;
        vector <int> v2;
        int i = 0;
        while(temp != NULL)
        {
            if(i%2 == 0)
            {
                v1.push_back(temp->val);
            }
            else
            {
                v2.push_back(temp->val);
            }
            i++;
            temp = temp->next;
        }
        v1.insert(v1.end(),v2.begin(),v2.end());

        ListNode *newNode = new ListNode(v1[0]);
        ListNode *curr = newNode;
        for(int i=1;i<v1.size();i++)
        {
            curr->next = new ListNode(v1[i]);
            curr = curr->next;
        }
        return newNode;
    }
};
