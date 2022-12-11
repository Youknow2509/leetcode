
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int last = nums[0];
        int i = 1;
        while(i < nums.size()){
            if(nums[i] == last){
                nums.erase(nums.begin()+i);
            }else{
                last = nums[i];
                i++;
            }
        }
        return nums.size();
    }
};
/* The judge will test your solution with the following code:

int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
} */
//                      *   * *   *   *
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