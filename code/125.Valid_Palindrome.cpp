
#include <bits/stdc++.h>

using namespace std;

class Solution{
private:
    bool valid(char ch) {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }
char change(char ch){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else if (ch >= '0' && ch <= '9'){
        return ch;
    }
    else{
        return ch - 'A' + 'a';
    }
}
bool checkpalindrome(string a){
    int s = 0,
        e = a.length() - 1;
    while (s <= e){
        if (!valid(a[s])){
           s++;
        }
        else if (!valid(a[e])){
            e--;
        }
        else if (change(a[s]) == change(a[e])){
            s++;
            e--;
        }
        else {
           return 0;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        return checkpalindrome(s);
    }
};

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

    string str;
    Solution st;

    getline(cin, str);

    cout << str << endl;

    if (st.isPalindrome(str)){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    } 

    return 0;
}