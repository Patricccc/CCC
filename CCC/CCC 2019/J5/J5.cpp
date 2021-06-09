#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string rule1[3], rule2[3];
    for(int i=0;i<3;i++){
        cin >> rule1[i] >> rule2[i];
        make_pair(rule1[i], rule2[i]);
    }
    int moves;
    string initial, final;
    cin >> moves >> initial >> final;
    
    return 0;
}