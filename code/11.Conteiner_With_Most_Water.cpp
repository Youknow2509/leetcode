
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int res = -1, len = height.size();
        int i = 0,
            j = len - 1;
        while (i < j){
            if (height[i] > height[j]){
                res = max(res, (j - i)*(height[j]));
                j--;
            }
            else{
                res = max(res, (j - i)*(height[i]));
                i++; 
            }
        }
        return res;
    }
};

int main(){ 

    #ifndef ONLINE_JUDGE    
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif  
    
    Solution st;
    int n;  cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++){
        cin >> height[i];
    }
    
    cout << st.maxArea(height) << endl;

    return 0;
}