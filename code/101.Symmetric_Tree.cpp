
#include<bits/stdc++.h>

using namespace std;

struct TreeNode
{
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
public:
    bool isMirror(TreeNode *left, TreeNode *right) {
        if (!left && !right) 
            return true;    
        if (!left || !right) 
            return false;  
        if (left->val != right->val) 
            return false;
        return isMirror(left->left, right->right) && isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (!root) 
            return true;
        return isMirror(root->left, root->right);
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
