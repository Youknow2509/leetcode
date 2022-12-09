
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        int ans = INT_MAX;
        for(int i = 0; i < strs.size()-1; i++){
            ans = min(ans, (int)min(strs[i].size(), strs[i+1].size()));
            while(strs[i].substr(0, ans) != strs[i+1].substr(0, ans)){
                ans--;
            }
            if(ans == 0)return "";
        }
        return strs[0].substr(0, ans);
    }
};


int main(){

    Solution st;
    int n, number_string;
    vector<string> vt_str;

    cout << " Test case: ";
    cin >> n;
    cout << endl;
    while(n--){
        cout << "Number strings: " ;
        cin >> number_string;
        cout << endl;
        for ( int i = 0; i < number_string; i++){
            cin >> vt_str[i];
        }
        cout << "Output: " << st.longestCommonPrefix(vt_str) << endl;
    }

    return 0;
}