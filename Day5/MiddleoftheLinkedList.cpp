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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int x=0;
        while(temp->next!=NULL){temp=temp->next;x++;}
        x++;int s=x/2;
        temp=head;
        while(s--){
            temp=temp->next;
        }
        return temp;
    }
};
