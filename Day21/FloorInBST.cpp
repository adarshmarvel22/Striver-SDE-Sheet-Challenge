/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int floorInBST(TreeNode<int> * root, int x)
{
   int curr=-1;
    
    while(root){
        if(x==root->val){
            curr=x;
            return curr;
        }
        if(x>root->val){
            curr=root->val;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
        return curr;
}
