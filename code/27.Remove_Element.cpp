
#include <bits/stdc++.h>

using namespace std;

/* The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int val = ...; // Value to remove
int[] expectedNums = [...]; // The expected answer with correct length.
                            // It is sorted with no values equaling val.

int k = removeElement(nums, val); // Calls your implementation

assert k == expectedNums.length;
sort(nums, 0, k); // Sort the first k elements of nums
for (int i = 0; i < actualLength; i++) {
    assert nums[i] == expectedNums[i];
} */

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        return nums.size();
    }
};

int main(){

    int n, size_arr, x, val;
    Solution st;
    cout << "Test case: "; cin >> n;
    while(n--){
        vector<int> arr;
        cout << "Size array: "; cin >> size_arr;
        cout << "Input: "<< endl << "   Array: ";

        for(int i = 0; i < size_arr; i++){
            cin >> x;
            arr.push_back(x);
        }
        cout << endl << "   Val: "; cin >> val;
        cout << endl;

        cout << "Output: " << st.removeElement(arr, val);
    }
    return 0;
}