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
        if(head == NULL||head->next == NULL) return NULL;
        
    ListNode* fast = head;
    ListNode* slow = head;
    ListNode* x = head;
        bool flag=0;
    while(fast->next != NULL&&fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
            
        if(slow == fast) {
            flag=1;
            
            break;
        }
    }
        if(flag){
        while(slow != x) {
                slow = slow->next;
                x = x->next;
            }
            return slow;
        }
        return NULL;
    }
};
