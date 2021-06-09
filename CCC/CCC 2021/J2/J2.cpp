#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n, i, max=0;
    int x;
    string m = "";
    cin >> n;
    string name[n];
    int bid[n];
    for(i=0;i<n;i++){
        cin >> name[i] >> bid[i];
    }
    for(i=0;i<n;i++){
        if(bid[i]>max&&bid[i]!=max){
            max = bid[i];
            m = name[i];
        }
    }
    cout << m;
}