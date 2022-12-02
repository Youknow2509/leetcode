
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    vector<int> twoSum(vector<int>& nums, int target){

        vector<int> res;
        vector<int> ind = nums;
        //nums = {7, 2, 11, 15}; target = 9
        sort(nums.begin(), nums.end());
        // =>nums = {2, 7, 11, 15}
        int j = nums.size() - 1, i = 0, a, b;
        while(j > i && i >= 0 && j <= nums.size() - 1){
            if (nums[i] + nums[j] == target) {
                a = nums[i];
                b = nums[j];
                break;
            }
            else if (nums[i] + nums[j] > target){
                j--;
            }
            else i++;
        }
        for (int i = 0; i < ind.size(); i++){
            if (res.size() == 2) break;
            if (ind[i] == a || ind[i] == b){
                res.push_back(i);
            }
        }

        return res;
    }
};

int main(){

    vector<int> vt;
    vector<int> res;
    Solution st;
    int n, size_nums, ex, target ;

    cout << "Test case = "; 
    cin >> n;


    cout << endl;
    while (n--){
        cout << "Size nums = " ;  
        cin >> size_nums;
        cout << endl;
        for (int i = 0; i < size_nums; i++) {
            cin >> ex;
            vt.push_back(ex);
        }
        cout << "Target = ";
        cin >> target;
        cout << endl;
        res = st.twoSum(vt, target);
        cout << "Output = [" << res[0] << ", " << res[1] << "]" << endl; 

    }
    return 0;
}   