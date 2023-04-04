
#include <bits/stdc++.h>

using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

struct TreeNode{
    int val;
    TreeNode *left,
        *right;
};

TreeNode *newNode(int val){
    TreeNode *temp = new TreeNode;
    temp->val = val;
    temp->left = temp->right = NULL;
    return temp;
}

TreeNode *push_tree(TreeNode *root, int val){
    if (!root)
        return newNode(val);
    if (val >= root->val){
        return push_tree(root->right, val);
    }
    else{
        return push_tree(root->left, val);
    }
    return root;
}

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)
            return false;
        if (root->left == NULL && root->right == NULL && targetSum == root->val)
            return true;
        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};

int main(){

    #ifndef ONLINE_FUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

    TreeNode* root = NULL;
    int targetSum,
        size_tree;
    Solution st;
    
    cin >> size_tree;

    for (int i = 0; i < size_tree; i++){
        int temp_input_val_tree;
        cin >> temp_input_val_tree;
        root = push_tree(root, temp_input_val_tree);
    }

    cin >> targetSum;

    if (st.hasPathSum(root, targetSum)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}