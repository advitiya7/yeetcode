// Last updated: 1/22/2026, 7:56:36 PM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL){
            return NULL;
        }
        ListNode*slow=head;
        ListNode*fast=head;
        ListNode*inter=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(slow!=inter){
                    inter=inter->next;
                    slow=slow->next;
                }
                return inter;
            }
        }
        return NULL;
        
    }
};