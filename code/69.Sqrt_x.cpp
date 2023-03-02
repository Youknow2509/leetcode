
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    
    int mySqrt(int x) {
        if (x < 0)
            return -1;
        double res = 1.0,
            EPSILON = 0.0001;
        res = res + (x/res - res)/2;
        while(res*res - x > EPSILON){
            res = res + (x/res - res)/2;
        }
        return (int)res;
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
	freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    
    Solution st;
    int x;
    cin >> x;
    cout << "Sqrt(" << x << ") = " << st.mySqrt(x) << endl;

    return 0;
}
