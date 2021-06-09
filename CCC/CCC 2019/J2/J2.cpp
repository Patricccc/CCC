#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    char c[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> c[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<a[i];j++){
            cout << c[i];
        }
        cout << '\n';
    }
    return 0;
}