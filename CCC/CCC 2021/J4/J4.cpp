#include <iostream>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    string s = "";
    cin >> s;
    int lcount = 0, mcount = 0;
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='L'){
            lcount++;
        }
        else if(s.at(i)=='M'){
            mcount++;
        }
    }
    int s1m = 0, s1s = 0;
    for(int i=0;i<lcount;i++){
        if(s.at(i)=='M'){
            s1m++;
        }
        else if(s.at(i)=='S'){
            s1s++;
        }
    }
    int s2l = 0, s2s = 0;
    for(int i=lcount;i<lcount+mcount;i++){
        if(s.at(i)=='L'){
            s2l++;
        }
        else if(s.at(i)=='S'){
            s2s++;
        }
    }
    int s3l = 0, s3m = 0;
    for(int i=lcount+mcount;i<s.length();i++){
        if(s.at(i)=='L'){
            s3l++;
        }
        else if(s.at(i)=='M'){
            s3m++;
        }
    }
    int swaps = 0;
    if(s1s!=0&&s3l!=0){
        if(s1s==s3l){
            swaps += s3l;
            s1s = 0;
            s3l = 0;
        }
        else if(s1s<s3l){
            swaps += s1s;
            s3l -= s1s;
            s1s = 0;
        }
        else{
            swaps += s3l;
            s1s -= s3l;
            s3l = 0;
        }
    }
    if(s1m!=0&&s2l!=0){
        if(s1m==s2l){
            swaps += s2l;
            s1m = 0;
            s2l = 0;
        }
        else if(s1m<s2l){
            swaps += s1m;
            s2l -= s1m;
            s1m = 0;
        }
        else{
            swaps += s2l;
            s1m -= s2l;
            s2l = 0;
        }
    }
    if(s2s!=0&&s3m!=0){
        if(s2s==s3m){
            swaps += s3m;
            s2s = 0;
            s3m = 0;
        }
        else if(s2s<s3m){
            swaps += s2s;
            s3m -= s2s;
            s2s = 0;
        }
        else{
            swaps += s3m;
            s2s -= s3m;
            s3m = 0;
        }
    }
    swaps += (s1m + s1s + s2l + s2s + s3l + s3m)/3*2;
    cout << swaps;
    
    return 0;
}