#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int m, n, k;
    cin >> m >> n >> k;
    char rc;
    int num, counter = 0;
    bool rcom[m+1], ccom[n+1];
    bool grid[m+1][n+1];
    for(int i=1;i<=m;i++){
        rcom[i] = false;
    }
    for(int i=1;i<=n;i++){
        ccom[i] = false;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            grid[i][j] = false;
        }
    }
    for(int i=0;i<k;i++){
        cin >> rc >> num;
        if(rc == 'R'){
            rcom[num] = !rcom[num];
        }
        else if(rc == 'C'){
            ccom[num] = !ccom[num];
        }
    }
    for(int i=1;i<=m;i++){
        if(rcom[i]){
            for(int j=1;j<=n;j++){
                grid[i][j] = !grid[i][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(ccom[i]){
            for(int j=1;j<=m;j++){
                grid[j][i] = !grid[j][i];
            }
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(grid[i][j]){
                counter++;
            }
        }
    }
    cout << counter;
    return 0;
}