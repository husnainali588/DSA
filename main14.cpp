#include <iostream>
using namespace std;

//Removing all white spaces

void removeSpaces(string &s) {
    int count = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            s[count] = s[i];
            count++;
        }
    }
    s.erase(count);
}

int main() {
    string text = "Follow the white rabbit";
    removeSpaces(text);
    cout << text;

    return 0;
}