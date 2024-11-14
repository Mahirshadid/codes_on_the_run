#include<bits/stdc++.h>
using namespace std;

int main(){
    string given = "madam";
    vector<char> s;
    int c=0;
    for(int i=0;i<given.size();i++){
        char c = given[i];
        s.push_back(c);
    }

    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }

    for(int i=0;i<s.size();i++){
        if(given[i]!=s.back()){
            c++;
        }
        s.pop_back();
    }

    if(c==0){
        cout<<"Palindrome";
    }else{
        cout<<"NotPalindrome";
    }
}
