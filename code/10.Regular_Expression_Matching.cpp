
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) { // dp
        int m = s.length(),
            n = p.length();
        // Tạo bảng DP 2D
        vector<vector<bool> > dp(m + 1, vector<bool>(n + 1, false));
        // Mẫu rỗng khớp với văn bản rỗng
        dp[0][0] = true;
        // Đánh dấu '*' là true cho các mẫu như "a*", "a*b*", v.v.
        for (int i = 1; i <= n; i++) {
            if (p[i - 1] == '*') {
                dp[0][i] = dp[0][i - 2];
            }
        }
        // Điền bảng DP
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                // Nếu các ký tự hiện tại khớp hoặc mẫu có dấu '.'
                if (p[j - 1] == '.' || p[j - 1] == s[i - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                // Nếu mẫu có dấu '*'
                else if (p[j - 1] == '*') {
                    // Khớp 0 lần xuất hiện của ký tự liền trước
                    dp[i][j] = dp[i][j - 2];
                    // Khớp 1 hoặc nhiều lần xuất hiện của ký tự liền trước
                    if (p[j - 2] == '.' || p[j - 2] == s[i - 1]) {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                }
                // Không khớp các ký tự
                else {
                    dp[i][j] = false;
                }
            }
        }
        // Kết quả cuối cùng được lưu tại dp[m][n]
        return dp[m][n];
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    Solution st;
    string s, p;
    cin >> s >> p;

    if (st.isMatch(s, p)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}