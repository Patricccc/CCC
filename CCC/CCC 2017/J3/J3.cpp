#include <iostream>
#include <math.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int x1, y1, x2, y2, charge;
    cin >> x1 >> y1 >> x2 >> y2 >> charge;
    int distance = abs(x1-x2) + abs(y1-y2);
    if(distance<=charge&&!((charge-distance)%2)){
        cout << 'Y';
    }
    else{
        cout << 'N';
    }
    return 0;
}