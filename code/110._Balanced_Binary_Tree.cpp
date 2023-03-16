
#include<bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,
        *right;
};

TreeNode *newNode(int val){
    TreeNode *temp = new TreeNode();
    temp->val = val;
    temp->left = temp->right = NULL;
    return temp;
}

class Solution {
private:
    int lv_tree(TreeNode *root){
        if (root == NULL) return 0;
        return 1 + max(lv_tree(root->left), lv_tree(root->right));
    }
public:
    bool isBalanced(TreeNode* root) {
        int lh, rh;
        if (root == NULL)   
            return true;
        lh = lv_tree(root->left);
        rh = lv_tree(root->right);
        
        if (abs(lh - rh) <= 1 && isBalanced(root->left) && isBalanced(root->right))
            return true;
        return false;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    

    return 0;
}
