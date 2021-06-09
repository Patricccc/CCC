#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int distance[4];
    for(int i=0;i<4;i++){
        cin >> distance[i];
    }
    int grid[5][5];
    grid[0][0] = grid[1][1] = grid[2][2] = grid[3][3] = grid[4][4] = 0;
    grid[1][0] = grid[0][1] = distance[0];
    grid[2][0] = grid[0][2] = distance[0] + distance[1];
    grid[3][0] = grid[0][3] = distance[0] + distance[1] + distance[2];
    grid[4][0] = grid[0][4] = distance[0] + distance[1] + distance[2] + distance[3];
    grid[2][1] = grid[1][2] = distance[1];
    grid[3][1] = grid[1][3] = distance[1] + distance[2];
    grid[3][2] = grid[2][3] = distance[2];
    grid[4][1] = grid[1][4] = distance[1] + distance[2] + distance[3];
    grid[4][2] = grid[2][4] = distance[2] + distance[3];
    grid[4][3] = grid[3][4] = distance[3];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout << grid[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}