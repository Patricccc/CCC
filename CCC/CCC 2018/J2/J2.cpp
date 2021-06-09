#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, counter;
    counter = 0;
    cin >> n;
    char today[n], yesterday[n];
    for(int i=0;i<n;i++){
        cin >> today[i];
    }
    for(int i=0;i<n;i++){
        cin >> yesterday[i];
    }
    for(int i=0;i<n;i++){
        if(yesterday[i]=='C'&&today[i]=='C'){
            counter++;
        }
    }
    cout << counter;
    return 0;
}