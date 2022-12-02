
#include <bits/stdc++.h>

using namespace std;

class Solution {
private:
    map<int, int> insert_mp(vector<int> arr){
        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }
        return mp;
    }
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp = insert_mp(arr);
        map<int, int> :: iterator it;
        set<int> check;
        for (it = mp.begin(); it != mp.end(); it++){
            check.insert(it->second);
        }
        if(check.size() != mp.size()) return false;
        return true;
    }
};

int main(){
    
    int n;
    cout << "Test case = ";
    cin >> n;
    cout << endl;

    while (n--){
        Solution st;
        vector<int> arr;
        int m;
        cout << "Size arr = ";
        cin >> m;
        cout << endl;
        for (int i = 0; i < m; i++){
            int x; cin >> x;
            arr.push_back(x);
        }
        if (st.uniqueOccurrences(arr)) cout << "Output: true";
        else cout << "Output: false";
        cout << endl;
    }
    return 0;
}
 
