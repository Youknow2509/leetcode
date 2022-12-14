
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size() - 1, st = 1;

        for (int i = n; i >= 0; i--){
            digits[i] += st;
            if (digits[i] < 10){
                st = 0;
            }
            else{
                digits[i] = digits[i] - 10;
                st = 1;
            }
        }

        if (digits[0] == 0) digits.insert(digits.begin(),1);
        return digits;
    }
};

int main(){

    int n, i = 1, size_digits, index;
    Solution st;
    vector<int> res;
    
    cout << "Test case: "; cin >> n;

    while (n--)
    {   
        vector<int> digits;

        cout << "# Case " << i << endl; i++;
        cout << "   Size digits: " ; cin >> size_digits;
        cout << endl;
        cout << "   Input digits: " ;
        for (int i = 0; i < size_digits; i++) {
            cin >> index;
            digits.push_back(index);
        }
        res = st.plusOne(digits);
        cout << "   Output: ";
        for ( int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }
    

    return 0;
}

/* Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0]. */