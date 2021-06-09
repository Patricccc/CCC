#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int h[n+1], w[n];
    double area = 0;
    for(int i=0;i<=n;i++){
        cin >> h[i];
    }
    for(int i=0;i<n;i++){
        cin >> w[i];
    }
    for(int i=0;i<n;i++){
        area += (h[i]+h[i+1])*w[i];
    }
    area /= 2;
    cout << fixed << area;
    return 0;
}