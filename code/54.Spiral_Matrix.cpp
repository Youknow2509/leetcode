
#include <bits/stdc++.h>    

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> >& matrix) {
        int s_row = 0,
            s_col = 0,
            e_row = matrix.size(),
            e_col = matrix[0].size();

        vector<int> res;

        while( s_row < e_row && s_col < e_col){
            for (int i = s_col; i <= e_col - 1; i++){
                res.push_back(matrix[s_row][i]);
            }
            if (s_row + 1 < e_row){
                for (int i = s_row + 1; i <= e_row - 1; i++){
                    res.push_back(matrix[i][e_col-1]);
                }
                if(e_col - 2 >= s_col){       
                    for (int i = e_col - 2; i >= s_col; i--){
                        res.push_back(matrix[e_row-1][i]);
                    }
                    if(e_row - 2 >= s_row){
                        for (int i = e_row - 2; i > s_row; i--){
                            res.push_back(matrix[i][s_col]);
                        }
                    }
                }
            }
            e_col--;
            e_row--;
            s_col++;
            s_row++;
        }
        return res;
    }
};

int main(){

    #ifndef ONLINE_JUDGE    
    freopen("Show_screen/INP.TXT", "r", stdin);
    freopen("Show_screen/OUT.TXT", "w", stdout);
    #endif

    int cols, rows,
        index = 1;

    Solution st;

    cin >> rows >> cols;

    vector<vector<int> > matrix(rows, vector<int>(cols, 0));

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            matrix[i][j] = index;
            index++;
        }
    }

    vector<int> res = st.spiralOrder(matrix);

    int len = res.size();

    for (int i = 0; i < len; i++){
        cout << res[i] << " ";
    }

    return 0;
}