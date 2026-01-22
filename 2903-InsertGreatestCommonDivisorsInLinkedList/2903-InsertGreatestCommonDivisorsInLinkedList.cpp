// Last updated: 1/22/2026, 7:51:32 PM
#include<bits/stdc++.h>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*temp=head;
        ListNode*curr=head->next;
        while(curr!=NULL){
            ListNode*data=new ListNode(__gcd(temp->val,curr->val));
            data->next=curr;
            temp->next=data;
            temp=data->next;
            curr=data->next->next;   
        }
        return head;
        
    }
};