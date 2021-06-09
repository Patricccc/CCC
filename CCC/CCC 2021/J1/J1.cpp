#include <iostream>
using namespace std;
void solve(int b){
    int p;
    p = 5*b-400;
    cout << p << '\n';
    if(p<100&&b<100){
        cout << "1";
    }
    else if(p>100&&b>100){
        cout << "-1";
    }
    else if(p==100&&b==100){
        cout << "0";
    }

}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int b;
    cin >> b;
    solve(b);
}