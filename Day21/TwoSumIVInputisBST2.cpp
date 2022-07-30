class BSTIterator{
private:

    stack <TreeNode *> st;
	//to store whether its front or increasing iterator  , back or decreasing iterator of inorder traversal
	// true means decreasing iterator of inorder traversal
    bool isReverse;

private:
    // to push all the nodes in stack for  right or left child depending upon the isReverse value 
    void pushAll(TreeNode *root){
        while(root != NULL){
            st.push(root);
			//if its reverse push the right child if not push the left child
            if(isReverse) root = root -> right;
            else root = root -> left;
        }
    }

public:
    BSTIterator(TreeNode *root, bool reverse){
        isReverse = reverse;
        pushAll(root);
    }
    
    int next(){
        TreeNode *node = st.top();
        st.pop();
        
		//checking if the reverse is false then we have to push all the left childs of subtree
        if(isReverse and node -> left != NULL) pushAll(node -> left);
        
		//checking if the reverse is true then we have to push all the right childs of subtree
        if(!isReverse and node -> right != NULL) pushAll(node -> right);
        
        return node -> val; 
    }
    
    bool hasNext(){
        return !st.empty();
    }
    
    
};


class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        
        if(root == NULL) return false;
        
		// left for increasing and right for decreasing iterator of inorder traversal
        BSTIterator left(root, false), right(root, true);
        
		//initialize the front and back value of BST inorder traversal
        int i = left.next();
        int j = right.next();
        
		// simple two pointer approach
        while(i < j){
            if(i + j == k) return true;
            else if(i + j < k) i = left.next();
            else j = right.next();
            
        }
        
        return false;
    }
};
