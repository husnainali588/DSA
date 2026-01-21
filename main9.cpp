#include <iostream>
#include <climits>
using namespace std;

int myAtoi(string s){
    int i = 0;
    int sign = 1;
    long result = 0;

    //skip leading spaces
    while(i<s.length() && s[i]==' '){
        i++;
    }

    //handle the signs
    if(i<s.length()  && (s[i]=='+' || s[i]=='-')){
        if(s[i]=='-') sign=-1;
        i++;
    }

    //convert digits
    while( i<s.length() && s[i]>='0' && s[i]<='9') {
        result=result*10+(s[i]-'0');

        if(sign == 1 && result>INT_MAX) return INT_MAX;
        if(sign == -1 && -result<INT_MIN) return INT_MIN;

        i++;
    }
    return result*sign;
}

int main() {

    cout << "Case 1: " << myAtoi("   -42") << endl;            // Output: -42
    cout << "Case 2: " << myAtoi("4193 with words") << endl;   // Output: 4193
    cout << "Case 3: " << myAtoi("9999999999999") << endl;     // Output: 2147483647 (Clamped)

    return 0;
}