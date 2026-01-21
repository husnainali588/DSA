#include <iostream>
#include <unordered_set>
using namespace std;

//find longest non repeating substring

int NonRepeatingSubstring (string s) {
    int left=0, maxLen=0;
    unordered_set<char> st;
    
    for(int right=0; right<s.length(); right++){
        while( st.find(s[right]) != st.end() ){
            st.erase(s[left]);
            left++;
        }
        st.insert(s[right]);
        maxLen = max(maxLen, right-left+1);
    }

    return maxLen;
}

int main () {
    string s = "abcabcbb";
    cout<< NonRepeatingSubstring(s);

    return 0;
}