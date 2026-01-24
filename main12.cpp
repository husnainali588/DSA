#include <iostream>
using namespace std;

//find all possible substrings of given string

void printAllSubstrings(string s) {
    int n = s.length();

    // 1️⃣ Outer loop: Sets the starting point of the substring
    for (int i = 0; i < n; i++) {
        string currentSubstring = ""; // Reset for every new starting character

        // 2️⃣ Inner loop: Gradually expands the substring character by character
        for (int j = i; j < n; j++) {
            currentSubstring += s[j]; // Build onto what we have manually
            
            // 3️⃣ Print the substring we just completed
            cout << currentSubstring << endl;
        }
    }
}

int main() {
    string input = "abc";
    cout << "All substrings of " << input << ":" << endl;
    printAllSubstrings(input);
    return 0;
}