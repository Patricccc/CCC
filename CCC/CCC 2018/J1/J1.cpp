#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    int a[4];
    bool answer = false;
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    if(a[0]==8||a[0]==9){
        if(a[1]==a[2]){
            if(a[3]==8||a[3]==9){
                answer = false;
            }
            else {
                answer = true;
            }
        }
        else {
            answer = true;
        }
    }
    else {
        answer = true;
    }
    if(answer==true){
        cout << "answer";
    }
    else {
        cout << "ignore";
    }
    return 0;
}