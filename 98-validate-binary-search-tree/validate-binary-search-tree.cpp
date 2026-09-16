class Solution {
public:
    bool check(TreeNode* root , long long minval , long long maxval){
        if(root == nullptr) return true ;

        if(root->val <= minval || root->val >= maxval)
            return false;

        return check(root->left , minval , root->val) && check(root->right ,root->val , maxval );
        
    }

    bool isValidBST(TreeNode* root) {
    return check(root , LLONG_MIN , LLONG_MAX);
        
    }
};