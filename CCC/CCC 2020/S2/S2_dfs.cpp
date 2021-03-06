#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int grid[1005][1005];
bool visited[1005][1005];
vector<vector<pair<int, int> > > coor(100000);

bool dfs(int r, int c){
    if(r==1&&c==1) return true;
    if(!visited[r][c]){
        visited[r][c] = true;
        for(int i=0;i<coor[r*c].size();i++){
            if(dfs(coor[r*c][i].first, coor[r*c][i].second)) return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int m, n;
    cin >> m >> n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> grid[i][j];
            coor[grid[i][j]].push_back(make_pair(i, j));
        }
    }
    bool ans = dfs(m, n);
    if(ans) cout << "yes";
    else cout << "no";
    return 0;
}
