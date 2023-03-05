
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mx=0; 
        for( int i = 0; i <= mx && i < nums.size (); i++){
            mx = max( mx, i + nums[i]); 
            if(mx >= nums.size() - 1) return true; 
        }
        return false; 
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int size_arr,
        temp;
    Solution st;
    vector<int> arr(10000);
    cin >> size_arr;
    for (int i = 0; i < size_arr; i++){
        cin >> temp;
        arr.push_back(temp);
    }
    if (st.canJump(arr)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }
    
    return 0;
}