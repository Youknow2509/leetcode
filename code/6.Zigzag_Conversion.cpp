
#include<bits/stdc++.h>

using namespace std;
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }

        string answer;
        int n = s.size();
        int charsInSection = 2 * (numRows - 1);

        for (int currRow = 0; currRow < numRows; ++currRow) {
            int index = currRow;

            while (index < n) {
                answer += s[index];
                if (currRow != 0 && currRow != numRows - 1) {
                    int charsInBetween = charsInSection - 2 * currRow;
                    int secondIndex = index + charsInBetween;
                    
                    if (secondIndex < n) {
                        answer += s[secondIndex];
                    }
                }
                index += charsInSection;
            }
        }

        return answer;
    }
};
int main(){

	#ifndef ONLINE_JUDGE
	freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
	#endif

	Solution st;
	string str = "PAYPALISHIRING";
	int numRows;
	cin >> numRows;

	string res = st.convert(str, numRows);

	cout << res << endl;


	return 0;	
}