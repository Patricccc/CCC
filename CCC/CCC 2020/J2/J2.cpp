#include <iostream>
#include <string>
using namespace std;

int main(){
    int p, n, r;
    cin >> p;
    cin >> n;
    cin >> r;
    int infected = n; 
    int people = n;
    int i = 0;
    while (true) {
        people = people + (infected*r);
        infected = infected*r;
        i++;
        if (people >= p) {
            if (people == p) {
                cout << i+1;
            }
            else {
                cout << i;
            }
            break;
        }
    }
    return 0;
}