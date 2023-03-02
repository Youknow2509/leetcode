
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;

        int *steps = new int[n];        
        
        steps[0] = 1; 
        steps[1] = 2; 
        
        for(int i = 2; i < n; i++){
            steps[i] = steps[i-1] + steps[i-2];
        }
        
        return steps[n-1];
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    Solution st;
    cin >> n;
    cout << "Output: " << st.climbStairs(n) << endl;

    return 0;
}
