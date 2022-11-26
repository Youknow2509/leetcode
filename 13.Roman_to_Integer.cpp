
#include <bits/stdc++.h>

using namespace std;
map<char, int> mp;

class Solution {
public:
    int romanToInt(string s) {
        int res = 0, n = s.length();
        for(int i = 0; i < n; i ++){
            if (mp[s[i]] < mp[s[i+1]] && i < n - 1 ) res -= mp[s[i]];
            else res += mp[s[i]];
        }
        return res;
    }

};

int main(){

    Solution st;
    string str;
    int n;
    cin >> n;


/* Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000 */
    mp.insert(pair<char, int>('I', 1));
    mp.insert(pair<char, int>('V', 5));
    mp.insert(pair<char, int>('X', 10));
    mp.insert(pair<char, int>('L', 50));
    mp.insert(pair<char, int>('C', 100));
    mp.insert(pair<char, int>('D', 500));
    mp.insert(pair<char, int>('M', 1000)); 
    

    while(n--){
        cin >> str;
        cout << st.romanToInt(str);
    }
    return 0;
}