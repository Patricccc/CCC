#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, shift, sum;
    sum = 0;
    cin >> n >> shift;
    for(int i=0;i<=shift;i++){
        sum += n;
        n*=10;
    }
    cout << sum;
    return 0;
}