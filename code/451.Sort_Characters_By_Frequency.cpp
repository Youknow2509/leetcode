
#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
// Input: "Aabb"
// Output: "bbAa"

class Solution {

public:
    string frequencySort(string s) {

        string res;
        map<char, int> ump;
        map<char, int>::iterator it;
        for ( int i = 0; i < s.length(); i++){
            ump[s[i]]++;
        }
        for ( it = ump.begin(); it != ump.end(); it++){
            res += it->first;
        }

        return res;
    }
}; 



// main test debug
int main(){
    string str;
    Solution st;
    str = "Aabb";
    cout << endl << st.frequencySort(str);
    return 0;
}

/* int main(){

    int n;
    string str, res;
    Solution st;
    cout << "Test case = ";
    cin >> n;
    cout << endl;
    while(n--){
        cout << "Input: s = ";
        cin >> str;
        res = st.frequencySort(str);
        cout << "Output: " << res << endl;
    }

    return 0;
} */

