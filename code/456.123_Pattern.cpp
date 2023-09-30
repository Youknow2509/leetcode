
#include <bits/stdc++.h>

using namespace std;

// 1 0 1 -4 -3

class Solution {
public:
    bool find132pattern(vector<int>& nums) {

        int n = nums.size(),
            Min_i = nums[0];

        if (n < 3){
            return false;
        }

        for (int j = 1; j < n - 1; j++){
            if (nums[j] < Min_i){
                Min_i = nums[j];
                continue;
            }
            for (int k = j + 1; k < n; k++){
                if (Min_i < nums[k] && nums[k] < nums[j]){
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {

    #ifndef ONLINE_JUDGE    
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

    int n; cin >> n;
    vector<int> vt(n);

    for (int i = 0; i < n; i++){
        cin >> vt[i];
    }

    Solution st;

    if (st.find132pattern(vt)) {
        cout << "t" << endl;
    } else {
        cout << "f" << endl;
    }

    return 0;
}