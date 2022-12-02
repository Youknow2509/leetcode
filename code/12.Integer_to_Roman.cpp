

#include <bits/stdc++.h>

using namespace std;

map<int, char> mp;

class Solution {
public:
    string intToRoman(int num) {
        string res;
// code here 
        
        return res;
    }
};

int main(){

    mp.insert(pair<int, char>(1,'I'));
    mp.insert(pair<int, char>(5,'V'));
    mp.insert(pair<int, char>(10,'X'));
    mp.insert(pair<int, char>(50,'L'));
    mp.insert(pair<int, char>(100,'C'));
    mp.insert(pair<int, char>(500,'D'));
    mp.insert(pair<int, char>(1000,'M')); 

    Solution st;
    
    int n, x;
    cin >> n;

    while (n--){
        cin >> x;
        cout << st.intToRoman(x) << endl;
    }

    return 0;
}