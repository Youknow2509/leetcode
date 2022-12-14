
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<int>st;
        int n = s.length(), res = n, j = 0;
        for (int i = 0; i < n; i++){
            if (s[i] != ' '){
                j++;
                if (i == n -1) {
                    if ( j != 0) st.push(j);
                }
            }
            else if (s[i] == ' ' || i == n - 1 ){
                if ( j != 0) st.push(j);
                j = 0;
            }
        }
        
        return st.top();
    }
};

//Input: s = "Hello World"
//Output: 5

int main(){

    int n, i = 1;
    Solution st;
    
    cout << "Test case: "; cin >> n;

    while(n--){

        string s;
        cout << "#Case " << i << endl; i++;
        cout << "   Input string S: "; cin >> s;
        cout << endl;
        cout << "   Output: " << st.lengthOfLastWord(s) << endl;
        
    } 
    return 0;   
}