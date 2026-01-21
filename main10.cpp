#include <iostream>
#include <string>
using namespace std;

//compress string (Run-length encoding)

string compressString (string s){
    //handle empty space string
    if(s.empty()) return "";

    int i=0;
    string compressed = "";

    while(i<s.length()){
        int j=i;
        while(j<s.length() && s[j]==s[i] ){
            j++;
        }
        int count = j-i;
        compressed += s[i];
        compressed += to_string(count);
        i=j;
    }

    //Only return compressed if it's actually shorter
    if(compressed.length()<s.length()){
        return compressed;
    } else {
        return s;
    }

}

int main() {
    cout << "Test 1 (aaabb): " << compressString("aaabb") << endl;    // Output: a3b2
    cout << "Test 2 (abc): " << compressString("abc") << endl;        // Output: abc (not compressed)
    cout << "Test 3 (abbbb): " << compressString("abbbb") << endl;    // Output: a1b4
    return 0;
}