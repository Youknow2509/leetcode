
#include <bits/stdc++.h>

using namespace std;

int MAX = 10e5;

class Solution {
public:
    void dfs(int node, vector<vector<pair<int, int>>>& adj, vector<bool>& visit, int& answer) {
        visit[node] = true;
        for (auto& edge : adj[node]) {
            answer = min(answer, edge.second);
            if (!visit[edge.first]) {
                dfs(edge.first, adj, visit, answer);
            }
        }
    }

    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n + 1);
        for (auto& road : roads) {
            adj[road[0]].push_back({road[1], road[2]});
            adj[road[1]].push_back({road[0], road[2]});
        }

        vector<bool> visit(n + 1);
        int answer = numeric_limits<int>::max();
        dfs(1, adj, visit, answer);

        return answer;
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
    vector<vector<int> > roads(MAX, vector<int>(3));
    int n;

    for (int i =0 ; i < n; i++){
        int u, v, len_uv;
        roads[i].push_back(u);
        roads[i].push_back(v);
        roads[i].push_back(len_uv);
    }

    cout << "Output: " << st.minScore(n, roads) << endl;

    return 0;
}