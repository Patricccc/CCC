#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "";
    string s2 = "";
    bool found = false;
    cin >> s1;
    cin >> s2;
    for(int i=0; i<s2.size(); i++){
        if(s1.find(s2) != string::npos){
            found = true;
            break;
        }
        string ns = s2.substr(1, s2.size()-1) + s2[0];
        s2 = ns;
    }
    if(found==true){
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}