#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int start = 1200;
    int duration, ans;
    cin >> duration;
    ans = 0;
    for(int i=0, rem=duration%720; i<rem; i++){
        start++;
        int minute = start%100, hour = start/100;
        if(minute >= 60 ) { minute-=60; hour++;}
        if(hour > 12) hour-=12;
        start = hour*100 + minute;
        if(start < 1000){
            int x=start/100, y=start%100/10, z=start%10;
            if(x-y == y-z){
                ans++;
            }
        }
        else{
            int x=start/1000, y=start%1000/100, z=(start%100)/10, p=start%10;
            if(x-y == y-z && y-z==z-p){
                ans++;
            }
        }
    }
    ans += 31*(duration/720);
    cout << ans;
    return 0;
}