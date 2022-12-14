
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int N = max(a.size(), b.size()) + 1, i = 0, carry = 0;
        a.insert(a.begin(), N-a.size(), '0');
        b.insert(b.begin(), N-b.size(), '0');
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for(int i = 0; i < N; i++){
            int ai = a[i]-'0', bi = b[i]-'0';
            int sumi = ai + bi + carry;
            switch(sumi){
                case 3:
                    a[i] = '1';
                    carry = 1;
                    break;
                case 2:
                    a[i] = '0';
                    carry = 1;
                    break;
                case 1:
                    a[i] = '1';
                    carry = 0;
                    break;
            }
        }
        if(a[N-1] == '0') a.resize(N-1);
        reverse(a.begin(), a.end());
        return a;
    }
};

int main(){

    int n, i = 0;
    Solution st;
    string a, b;
    
    cout << "Tese case: "; cin >> n;

    while(n--){
        cout << "# Case " << i << ":" << endl; i++;
        cout << "Input string a: "; cin >> a;
        cout << endl;
        cout << "Input string b: "; cin >> b;
        cout << endl;
        cout << "Output : " << st.addBinary(a, b) << endl;
    }

    return 0;
}

/* Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101" */

