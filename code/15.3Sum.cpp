
#include <bits/stdc++.h>

using namespace std;

/* class Solution {
public:
    vector<vector<int> > threeSum(vector<int>& nums) { // hash map
        int len = nums.size();
        vector<vector<int> >res;
        unordered_map<int, int> ump;
        unordered_map<int, int> :: iterator it;
        unordered_map<int, int> :: iterator it_end;

        sort(nums.begin(), nums.end());

        if (len < 3) return res;

        for (int i = 0; i < len; i ++){
            ump[nums[i]] = i;
        }
        
        it_end = ump.end();

        for (int i = 0; i < len - 2; i++){
            if (nums[i] > 0){
                break;
            }
            
            for (int j = i + 1; j < len - 1; j++){
                int temp = -(nums[i] + nums[j]);
                it = ump.find(temp);
                if (it != it_end && ump[temp] > j){
                    vector<int> vt_t;
                    vt_t.push_back(nums[i]);
                    vt_t.push_back(nums[j]);
                    vt_t.push_back(temp);
                    res.push_back(vt_t);
                    vt_t.erase(vt_t.begin(), vt_t.end());
                }
                j = ump.find(nums[j])->second;
            }
            i = ump.find(nums[i])->second;
        }

        return res;
    }
};
 */

class Solution { // two ptr
public:
    vector<vector<int> > threeSum(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int> > res;
        if (len < 3){
                return res;
        }

        sort(nums.begin(), nums.end());

        if (nums[0] > 0){
            return res;
        }

        for (int i = 1; i < len; i++){
            if (nums[i] = nums[i - 1]){
                i++;
            }
            int s = 0, e = len - 1;
            while (s < e){
                int temp = nums[i] + nums[s] + nums[e];
                if (temp > 0){
                    while(nums[e] == nums[e - 1]){
                        e--;
                    }
                    e--;
                }
                else if (temp < 0){
                    while(nums[s] == nums[s + 1]){
                        s++;
                    }
                    s++;
                }
                else{
                    res.push_back({nums[i], nums[e], nums[s]});
                }
            }
        }
        return res;
    }
};

void print_res(vector<vector<int> > vt){
    int len = vt.size();
    for (int i = 0; i < len; i++){
        cout << vt[i][0] << " " << vt[i][1] << " " << vt[i][2] << endl;
    }
    cout << endl;
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

    Solution st;
    int n; cin >> n;
    vector<int> vt(n);

    for (int i = 0; i < n; i++){
        cin >> vt[i];
    }

    print_res(st.threeSum(vt));

    return 0;
}


