#include <iostream>
#include <string>
using namespace std;

//check if a string is a shuffle of two strings

bool isShuffle(string a, string b, string c) {
    
    if (a.length() + b.length() != c.length()) {
        return false;
    }

    int i = 0;
    int j = 0;

    for (int k = 0; k < c.length(); k++) {
        
        if (i < a.length() && c[k] == a[i]) {
            i++;
        }
        
        else if (j < b.length() && c[k] == b[j]) {
            j++;
        }
    
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