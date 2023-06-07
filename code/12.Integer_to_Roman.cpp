

#include <bits/stdc++.h>

using namespace std;

map<int, char> mp;

class Solution {
public:
    string intToRoman(int num) {
        string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string ths[]={"","M","MM","MMM"};
        
        return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

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