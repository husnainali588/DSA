#include <iostream>
using namespace std;

//Removing all white spaces

void removeSpaces(string &s) {
    int left = 0;
    for (int right = 0; right < s.length(); right++) {
        if (s[right] != ' ') {
            s[left] = s[right];
            left++;
        }
    }
    s.erase(left);
}

int main() {
    string text = "Follow the white rabbit";
    removeSpaces(text);
    cout << text;

    return 0;
}