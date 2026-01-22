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

//anotherway

// #include <iostream>
// #include <unordered_set>
// using namespace std;

// int nonrepeatingSubstring (string s) {
//     int left=0;
//     int right=0;
//     int count = 0;
//     int maxLen = 0;
//     unordered_set<char> st;
//     while(left<s.length() && right<s.length()){
//         while(st.find(s[right])!=st.end()){
//             st.erase(s[left]);
//             left++;
//         }
//         st.insert(s[right]);
//         right++;
//         count=right-left;
//         maxLen = max(maxLen,count);
//     }
//     return maxLen;
// }

// int main() {
//     cout<<nonrepeatingSubstring("pwwkew");
//     return 0;
// }