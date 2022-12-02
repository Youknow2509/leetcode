
#include <bits/stdc++.h>

using namespace std;
map<char, int> mp;

char arr[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
int arr_size = 10;
class Solution
{
public:
    bool halvesAreAlike(string s)
    {
        int n = s.length() - 1;
        int c1 = 0, c2 = 0;
        for (int i = 0; i <= n / 2; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') c1++;
            
            if (s[n - i] == 'a'|| s[n - i] =='e'||s[n - i] =='i'||s[n - i] =='o'||s[n - i] =='u'||s[n - i] =='A'||s[n - i] =='E'||s[n - i] =='I'||s[n - i] =='O'||s[n - i] =='U') c2++;
        }
        if (c1 == c2)
            return true;
        return false;
    }
};

// main debug
int main()
{

    string s;
    Solution st;    //  0  1  2  3  4  5  6  7
    s = "AbCdEfGh"; // 8 phan tu  A  b  C  d  E  f  G  h
    // s = "book";
    if (st.halvesAreAlike(s))
        cout << "Output : true";
    else
        cout << "Output : flase";

    return 0;
}

/* int main(){

    int n;
    string s;
    Solution st;

    cout << "Test case = ";
    cin >> n;
    cout << endl;

    while (n--){
        cout << "String = ";
        cin >> s;
        if (st.halvesAreAlike(s)) cout << "Output : true";
        else cout << "Output : flase";
        cout << endl;
    }

    return 0;
} */