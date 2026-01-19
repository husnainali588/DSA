#include <iostream>
using namespace std;

int main() {
    string str = "my name is husnain";
    str += " ";
    int n = str.length();
    int count = 0;
    int num;

    cout << "Enter word no: " << endl;
    cin >> num;
    
    int i = 0; 
    for (int j = 0; j < n; j++) {
        if (str[j] == ' ') {
            count++;

            if (count == num) {
                for (int k = j - 1; k >= i; k--) {
                    cout << str[k];
                }
                return 0;
            }

            i = j + 1;
        }
    }

    return 0;
}