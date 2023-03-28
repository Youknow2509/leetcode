
#include<bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,
        *right;
};

TreeNode *newNode(int val){
    TreeNode *temp = new TreeNode;
    temp->val = val;
    temp->right = temp->left = NULL;
    return temp;
}


class Solution {
public:
    void lv(TreeNode* root , int &ans , int level){
        if(root == NULL){
            return ;
        }
        if(root -> left == NULL && root -> right == NULL){
            ans = min(ans,level);
            return;
        }
        lv(root->left, ans,level+1);
        lv(root -> right, ans,level+1);
    }

    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        int ans = INT_MAX;
        
        lv(root, ans,0);
        
        return ans+1;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    TreeNode* tree = NULL;
    tree = newNode(3);
    tree->left = newNode(9);
    tree->right = newNode(20);    
    tree->right->left = newNode(15);    
    tree->right->right = newNode(7);    
    
    Solution st;

    cout << "Output: " << st.minDepth(tree) << endl;

    return 0;
}
