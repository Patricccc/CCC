#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    pair<double, double> arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    double speed = 0;
    for(int i=1;i<n;i++){
        if(abs((arr[i].second-arr[i-1].second)/(arr[i].first-arr[i-1].first))>speed){
            speed = abs((arr[i].second-arr[i-1].second)/(arr[i].first-arr[i-1].first));
        }
    }
    cout << fixed << setprecision(5) << speed;
    return 0;
}