
#include<bits/stdc++.h>

using namespace std;



class Solution {
public:
    int max(int a, int b){
        return (a > b) ? a : b;
    }

    bool check(char *temp, char a, int n){
        for (int i = 0; i < n; i++){
            if (a == temp[i]){
                return false;
            }
        }
        return true;
    }

    int lengthOfLongestSubstring(string s) {
        int res = 1,
            n = s.size(),
            c = 1,
            _temp = 0;
        if (!n) return n;
        for (int i = 0; i < n - 1; i++){
            char *temp = new char[n-i];
            temp[_temp] = s[i];
            _temp ++;
            for (int j = i + 1; j < n; j++){
                if (check(temp, s[j], j - i + 1)){
                    c++;
                    res = max(res, c);
                    temp[_temp] = s[j];
                    _temp ++;
                }
                else{
                    c = 1;
                    break;
                }
            }
            c = 1;
            delete[] temp;
            temp = NULL;
            _temp = 0;
        }
        return res;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("INP.TXT", "r", stdin);
	freopen("OUT.TXT", "w", stdout);
    #endif 
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    string str = "";
    Solution st;
    getline(cin, str);
    cout << st.lengthOfLongestSubstring(str) << endl;

    return 0;
}
