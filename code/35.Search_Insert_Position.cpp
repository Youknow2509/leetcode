
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        int mid;
        
        //find lower bound
        while(l <= r){
            mid = l + (r-l)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                l = mid+1;
            }else{
                r = mid-1;
            }
        }
        
        return l;
    }
};
// 1 3 5 6   s = 0 e = 3 m = 1 -> s = 0 e = 1 m = 0 => m  + 1
// 0 1 2 3   s = 0 e = 3 m = 1 -> s = 1 e = 3 m = 2 => s = 2 e = 3 m = 2 
// tg = 2 => out 1
// tg = 7 => out 4
int main(){

    int n, size_nums, target;
    Solution st;

    cout << "Tese case: "; cin >> n;
    cout << endl;

    while(n--){
        vector<int> nums;

        cout << "Size nums: "; cin >> size_nums;
        cout << endl;
        cout << "Input nums: ";

        for (int i = 0; i < size_nums; i++){
            int x; cin >> x;
            nums.push_back(x);
        }

        cout << "Input target: "; cin >> target;
        cout << endl;

        cout << "Output: " << st.searchInsert(nums, target) << endl;
    }

    return 0;
}