
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int> nums) {

        int n = nums.size(), res = 0, i = 0, j = 1;
        solve(nums, i, j, res);
        res = n - res;
        return res;
    }
    void solve(vector<int> nums, int i, int j, int &res){
        if(i > nums.size() - 1) return;
        if(nums[i] == nums[j]){
            res++;
            solve(nums, i, j++, res);
        }
        else solve(nums, j, j++, res);
    }
};
// ex input:  nums = [0,0,1,1,1,2,2,3,3,4]
//     ptr            0 1 2 3 4 5 6 7 8 9
int main(){

    Solution st;
    int n, size_arr, x;

    cout << "Test case: "; cin >> n;
    cout << endl;

    while(n--){
        vector<int> arr;
        cout << "Size array: "; cin >> size_arr;
        cout << "Input array: ";

        for (int i = 0; i < size_arr; i++){
            cin >> x;
            arr.push_back(x);
        }
        cout << endl;
        cout << "Output: " << st.removeDuplicates(arr);
        cout << endl;
        }

    return 0;
}