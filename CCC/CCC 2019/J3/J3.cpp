#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    string s;
    for (int i=0;i<n;i++){
        cin >> s;
        int counter = 1;
        char current = s[0];
        for (int i=1;i<s.length();i++){
            if (s[i] == s[i-1]){
                counter ++;
                continue;
            }
            else{
                cout << counter << " " << current << " ";
                counter = 1;
                current = s[i];
            }
        }
        cout << counter << " " << current << " ";

        cout << '\n';
    }
    
    return 0;
}