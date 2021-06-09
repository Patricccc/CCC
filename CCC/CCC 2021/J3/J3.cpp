#include <iostream>
#include <string>
#include <vector>
using namespace std;
int i = 0;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<int> n;
    int integer;
    for(int i=0;;i++){
        cin >> integer;
        if(integer==99999){
            break;
        }
        n.push_back(integer);
    }
    int s = n.size();
    int firstdigit[s];
    int seconddigit[s];
    int lastthree[s];
    string action[s];
    for(i=0;i<s;i++){
        lastthree[i] = n[i]%1000;
        firstdigit[i] = n[i]/10000;
        seconddigit[i] = (n[i]/1000)%10;
        if((firstdigit[i]+seconddigit[i])%2==0){
            if(firstdigit[i]==0&&seconddigit[i]==0){
                action[i] = action[i-1];
            }
            else{
                action[i] = "right";
            }
        }
        else if((firstdigit[i]+seconddigit[i])%2!=0){
            action[i] = "left";
        }
    }
    for(i=0;i<s;i++){
        cout << action[i] << " " << lastthree[i] << '\n';
    }
    return 0;
}