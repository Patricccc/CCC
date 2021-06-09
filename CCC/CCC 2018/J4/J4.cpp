#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, i, j;
    cin >> n;
    int grid[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin >> grid[i][j];
        }
    }
    return 0;
}