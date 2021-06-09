#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1, n2, n3, total;
    cin >> n1;
    cin >> n2;
    cin >> n3;
    total = n1 + 2*n2 + 3*n3;
    if(total>=10){
        cout << "happy";
    }
    else{
        cout << "sad";
    }
    return 0;
}