#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int a1, a2, a3, b1, b2, b3;
    cin >> a3;
    cin >> a2;
    cin >> a1;
    cin >> b3;
    cin >> b2;
    cin >> b1;
    int at = a1 + 2*a2 + 3*a3;
    int bt = b1 + 2*b2 + 3*b3;
    if(at<bt){
        cout << "B";
    }
    else if(at==bt){
        cout << "T";
    }
    else{
        cout << "A";
    }
    return 0;
}