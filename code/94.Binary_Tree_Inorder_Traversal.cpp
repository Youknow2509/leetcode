
#include<bits/stdc++.h>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode *newNode(int val){
    TreeNode *temp = new TreeNode();
    temp->right = temp->left = NULL;
    temp->val = val;
    return temp;
}


class Solution {
private:
    vector<int> result;
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) {
            return {};
        }
        inorderTraversal(root->left);
        result.push_back(root->val);
        inorderTraversal(root->right);
        
        return result;
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

