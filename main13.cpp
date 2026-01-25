#include <iostream>
using namespace std;

//checking if given string is rotation of other string

bool isRotation (string s1, string s2) {

    //checking if they are equal
    if (s1.length() != s2.length()){
        return false;
    }

    //concatenate s1+s1;
    string temp = s1+s1;

    //checking if s2 is a substring of s1
    if(temp.find(s2)!=string::npos) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
    string s1 = "waterbottle";
    string s2 = "terbottlewa";
    
    if (isRotation(s1, s2)) {
        cout << s2 << " is a rotation of " << s1 << endl;
    } else {
        cout << s2 << " is NOT a rotation of " << s1 << endl;
    }

    return 0;
}