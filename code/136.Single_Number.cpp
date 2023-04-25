
#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size(),
            res = 0;
        for (int i = 0; i < n; i++){
            res = res ^ nums[i];
        }
        return res;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    Solution st;
    cin >> n;    
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << st.singleNumber(nums) << endl;
    return 0;
}
