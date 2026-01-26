#include <iostream>
#include <string>
using namespace std;

//check if a string is a shuffle of two strings

bool isShuffle(string a, string b, string c) {
    // 1. Length Check
    if (a.length() + b.length() != c.length()) {
        return false;
    }

    int i = 0; // Pointer for string A
    int j = 0; // Pointer for string B

    // 2. Iterate through the shuffled string C
    for (int k = 0; k < c.length(); k++) {
        // Check if current char of C matches current char of A
        if (i < a.length() && c[k] == a[i]) {
            i++;
        }
        // Check if current char of C matches current char of B
        else if (j < b.length() && c[k] == b[j]) {
            j++;
        }
        // If it matches neither, it's not a valid shuffle
        else {
            return false;
        }
    }

    return true;
}

int main() {
    string a = "abc";
    string b = "def";
    string c = "adbcef";

    if (isShuffle(a, b, c)) {
        cout << "Valid Shuffle!" << endl;
    } else {
        cout << "Invalid Shuffle!" << endl;
    }

    return 0;
}