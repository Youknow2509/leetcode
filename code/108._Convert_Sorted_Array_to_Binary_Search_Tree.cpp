
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
public:
    TreeNode *solve(vector<int>& nums, int s, int e){
        if (s > e)  
            return NULL;  
  
        int mid = (s + e)/2;  

        TreeNode *root = newNode(nums[mid]);  
  
        root->left = solve(nums, s, mid - 1);  
        root->right = solve(nums, mid + 1, e);  
    
        return root;  
    }

    TreeNode* sortednumsayToBST(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int size_nums,
        temp_input_vector;
    vector<int> vt;
    Solution st;
    TreeNode *root = NULL;

    cin >> size_nums;

    for (int i = 0; i < size_nums; i++){
        cin >> temp_input_vector;
        vt.push_back(temp_input_vector);
    }

    sort(vt.begin(), vt.end());

    root = st.sortednumsayToBST(vt);



    return 0;
}
