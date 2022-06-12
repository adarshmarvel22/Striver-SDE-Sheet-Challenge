/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)  return NULL;
        Node*iter=head,*front=head->next;
        
        while(iter!=NULL){
            Node*temp=new Node(iter->val);
            iter->next=temp;
            temp->next=front;
            iter=front;
            if(front==NULL)  break;
            front=front->next;
        }
        iter=head;
        
        while(iter!=NULL){
            if(iter->random!=NULL)
            iter->next->random=iter->random->next;
            
            iter=iter->next->next;
        }
        Node*newh=new Node(0);
        Node*cpycurr=newh;
       Node*curr=head;
        while(curr!=NULL){
            cpycurr->next=curr->next;
            curr->next=cpycurr->next->next;
            curr=curr->next;
            cpycurr=cpycurr->next;
        }
        // Node *x=head;
        // while(x!=NULL){
        //      if(x->random!=NULL)
        //     cout<<x->random->val<<" ";
        //     x=x->next;
        // }
        return newh->next;
    }
};
