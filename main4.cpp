#include <iostream>
using namespace std;

//Checking if a string is palindrome

int main() {
    
    string str = "racecar";
    int n = str.length();
    int i = 0;
    int j = n-1;

    if (n < 2) {
    cout<<"This is palindrome";
    return 0;
    }

    while(i<j){
        if(str[i]!=str[j]){
            cout<<"This is not palindrome";
            return 0;
        }
        i++;
        j--;
    }

    cout<<"This is palindrome";

    return 0;
}