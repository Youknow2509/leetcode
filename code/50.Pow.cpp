
#include <iostream>
#include <math.h>

using namespace std;

class Solution {
    double solve(double x, long long n){
        if ( n == 0 ) return 1;
        if ( n < 0 ) return 1.0/solve(x, -1*n);
        return (n % 2 == 0) ? (solve(x*x, n/2)) : (x*solve(x*x, ( n - 1 )/2)); 
    }
public:
    double myPow(double x, int n) {
        return solve(x, (long long)n);
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);    
    freopen("Show_screen/OUT.TXT", "w", stdout);    
    #endif

    double x; cin >> x;
    int n;  cin >> n;
    Solution st;
    cout << "Pow(x, n): " << st.myPow(x, n) << endl; 

    return 0;
}