
#include <bits/stdc++.h>

using namespace std;


class Solution {

public:
// case true [], {}[], {[]}. 
    bool isValid(string s) {
        int n = s.length();

        if ( n % 2 != 0) return false;

        stack<char> stk;
        set<char> keys = {'(', '{', '['};
        map<char, char> a;
        a['('] = ')';
        a['{'] = '}';
        a['['] = ']';

        
        for(int i = 0; i < n; i++){
            if(keys.find(s[i]) != keys.end()){
                stk.push(s[i]);
            }
            else if(!stk.empty() && a[stk.top()] == s[i]){
                stk.pop();
            }else{
                return false;
            }
        }
        return stk.empty();

    }
    
};

int main(){

    int n;
    Solution st;
    string s;

    cout << "Test case = ";
    cin >> n;
    cout << endl;
    while(n--){
        cout << "Input: ";
        cin >> s;
        if (st.isValid(s)) cout << "t"<< endl;
        else cout << "f" << endl;
    }

    return 0;
}