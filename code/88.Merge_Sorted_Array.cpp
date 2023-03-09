
#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        sort(nums1.begin(), nums1.begin() + m);
        sort(nums2.begin(), nums2.begin() + n);
        vector<int> res;
        int index_nums1 = 0,
            index_nums2 = 0;
        while(index_nums1 < m && index_nums2 < n){
            if(nums1[index_nums1] >= nums2[index_nums2]){
                res.push_back(nums2[index_nums2]);
                index_nums2++;
            }else{
                res.push_back(nums1[index_nums1]);
                index_nums1++;
            }
        }
        while(index_nums1 < m){
            res.push_back(nums1[index_nums1]);
            index_nums1++;
        }
        while(index_nums2 < n){
            res.push_back(nums2[index_nums2]);
            index_nums2++;
        }
        nums1 = res;
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
    vector<int> nums1,
        nums2;
    int m, 
        n,
        size_nums1,
        size_nums2,
        temp;
    cin >> size_nums1 >> size_nums2;
    for (int i = 0; i < size_nums1; i++){
        cin >> temp;
        nums1.push_back(temp);
    }

    cin >> m;

    for (int i = 0; i < size_nums2; i++){
        cin >> temp;
        nums2.push_back(temp);
    }

    cin >> n;

    st.merge(nums1, m, nums2, n);

    for (int i = 0; i < m + n; i++){
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
