
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();

        for (int windowStart = 0; windowStart <= n - m; windowStart++) {
            for (int i = 0; i < m; i++) {
                if (needle[i] != haystack[windowStart + i]) {
                    break;
                }
                if (i == m - 1) {
                    return windowStart;
                }
            }
        }
        
        return -1;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string haystack,
        needle;
    Solution st;

    cin >> haystack >> needle;

    cout << "Output: " << st.strStr(haystack, needle) << endl;

    return 0;
}
