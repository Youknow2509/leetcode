
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        int n = str.length();
        if ( x < 0 ) return false;
        for (int i = 0; i < n; i++){
            if (str[i] != str[n - i - 1]) return false;
        }
        return true;
    }
};

int main(){

    int n, x;
    Solution st;
    cout << "Test case = ";
    cin >> n;
    cout << endl;
    while(n--){
        cout << "Input: ";
        cin >> x;
        cout << "Output: " ;
        if (st.isPalindrome(x)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}