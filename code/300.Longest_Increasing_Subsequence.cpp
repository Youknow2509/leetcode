
#include <bits/stdc++.h>

using namespace std;

class DP {
public:
    int FindMaxArr(vector<int>& vt){
        int ans = vt[0],
            n = vt.size();
        for (int i = 1; i < n; i++){
            ans = ans > vt[i] ? ans : vt[i];
        }
        return ans;
    }

    int lenghtOfLIS(vector<int>& nums){
        int n = nums.size();
        vector<int> dp(n, 1);

        for (int i = 1; i < n; i++){
            for (int j = 0; j < i; j++){
                if (nums[i] > nums[j] && dp[i] < dp[j] + 1){
                    dp[i] = dp[j] + 1;
                }
            }
        }
        
        return FindMaxArr(dp);
    }
};

class GreedyWithBinarySearch{
public:
    int lenghtOfLIS(vector<int>& nums){
        int n = nums.size();
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < n; i++){
            if (ans.back() < nums[i]){
                ans.push_back(nums[i]);
            }
            else {
                int s = 0, e = ans.size() - 1, m;
                while( s < e ) {
                    m = (s + e)/2;
                    if (nums[i] > ans[m]){
                        e = m;
                    }
                    else {
                        s = m;
                    }
                }
                //
                
                //
            }
        }
        return ans.size();
    }
};

class Solution {
public:
    int lenghtOfLIS(vector<int>& nums){
        // use class DP or class Greedy With Binary Search
    }
};



int main(){

    #ifndef ONLINE_JUDGE    
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

    int size_arr; cin >> size_arr;
    vector<int> vt(size_arr);
    for (int i = 0; i < size_arr; i++){
        cin >> vt[i];
    }

    DP st;
    
    cout << st.lenghtOfLIS(vt) << endl;

    return 0;
}