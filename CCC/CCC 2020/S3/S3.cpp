#include <iostream>
#include <map>
#include <string>
using namespace std;
bool perm(map<char, int> m1, map<char, int> m2){
    for(int i=0;i<26;i++){
        char letter = 'a'+i;
        if(m1[letter]==m2[letter]){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    string needle, haystack;
    cin >> needle >> haystack;
    map<char, int> fneedle, fhaystack;
    for(int i=0;i<needle.size();i++){
        fneedle[needle[i]]++;
    }
    int count = 0;
    map<size_t, bool> used;
    for(int i=0;i<haystack.size()-needle.size()+1;i++){
        string hsubstr = haystack.substr(i, needle.size());
        if(i==0){
            for(int j=0;j<hsubstr.size();j++){
                fhaystack[hsubstr[j]]++;
            }
        }
        else{
            char removed = haystack[i-1], added = haystack[i + hsubstr.size() - 1];
            fhaystack[added]++;
            fhaystack[removed]++;
        }
        hash<string> hasher;
        size_t hash = hasher(hsubstr);
        if(perm(fneedle, fhaystack) && !used[hash]){
            used[hash] = true;
            count++;
        }
    }
    cout << count;
    return 0;
}