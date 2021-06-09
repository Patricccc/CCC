#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s;
    int temp, i;
    int grid[3][3];
    grid[1][1] = 1; grid[1][2] = 2; grid [2][1] = 3; grid [2][2] = 4;
    cin >> s;
    for(i=0;i<s.length();i++){
        if(s[i]=='H'){
            temp = grid[1][1];
            grid[1][1] = grid[2][1];
            grid[2][1] = temp;
            temp = grid[1][2];
            grid[1][2] = grid[2][2];
            grid[2][2] = temp;
        }
        else if(s[i]=='V'){
            temp = grid[1][1];
            grid[1][1] = grid[1][2];
            grid[1][2] = temp;
            temp = grid[2][1];
            grid[2][1] = grid[2][2];
            grid[2][2] = temp;
        }
    }
    cout << grid[1][1] << " " << grid[1][2] << '\n' << grid[2][1] << " " << grid[2][2];
    return 0;
}