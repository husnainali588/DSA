#include <iostream>
#include <string>
using namespace std;

// find the most frequent character (consecutive)

char mostFreq(string s) {
    int i = 0;
    int maxCount = 0;
    char result = s[0];

    while (i < s.length()) {
        int j = i;

        while (j < s.length() && s[j] == s[i]) {
            j++;
        }

        int count = j - i;

        if (count > maxCount) {
            maxCount = count;
            result = s[i];
        }

        i = j; // move forward
    }

    return result;
}

int main() {
    string s = "aaabbccccdde";
    cout << mostFreq(s);
    return 0;
}
