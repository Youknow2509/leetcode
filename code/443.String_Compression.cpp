
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {

        int N = chars.size(), 
            anchor = 0, 
            write = 0;

        for(int read = 0; read < N; read++){
            if(read == N-1 || chars[read] != chars[read+1]){
                //write char
                chars[write++] = chars[anchor];
                //write number more than one chars[anchor]
                if(read > anchor){
                    int count = read - anchor + 1;
                    for(char c : to_string(count)){
                        chars[write++] = c;
                    }
                }
                //point to next char
                anchor = read+1;
            }
        }
        return write;
    }
};


int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int size_arr;
    vector<char> vt;
    char temp;
    Solution st;
    cin >> size_arr;
    for (int i = 0; i < size_arr; i++){
        cin >> temp;
        vt.push_back(temp);
    }
    cout << st.compress(vt) << endl;

    return 0;
}
