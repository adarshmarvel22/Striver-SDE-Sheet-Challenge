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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode*h=new ListNode();
        ListNode*temp=h;
        int c=0;
        int x,y,sum;
        while((l1!=NULL||l2!=NULL)||c){
            ListNode*curr=new ListNode();
            sum=0;x=0;y=0;
            if(l1!=NULL){
                x=l1->val;
                l1=l1->next;
                 
            }
           
            if(l2!=NULL){
                y=l2->val;
                l2=l2->next;
                
            }

          
            sum=(x+y+c);
             c=sum/10;
  sum=sum%10;
            curr->val=sum;
            temp->next=curr;
            temp=temp->next;
            
        }
      
        return h->next;
    }
};
