#include <iostream>
using namespace std;

int main() {
    
    string str1 = "listen";
    string str2 = "silent";
    int n1 = str1.length();
    int n2 = str2.length();
    bool check = false;

    if(n1!=n2){
        cout<<"They are not anagrams";
        return 0;
    }

    int count[26]={};

    for(int i=0; i<n1; i++){
        count[str1[i] - 'a']++;
    }

    for(int i=0; i<n2; i++){
        count[str2[i] - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(count[i]!=0){
            cout<<"these are not anagrams";
            return 0;
        }
    }   

    cout<<"these are anagrams";
    return 0;
}