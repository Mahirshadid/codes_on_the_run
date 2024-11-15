#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "abcabcbdb",str;
    int l = s.size();
    int j=0;
    unordered_map<char, int> freq;

    for(int i=0;i<l;i++){
        freq[s[i]]++;

        if(freq[s[i]]==2){
            str+=s[i];
        }
    }

    cout<<str.size();
}
