#include <iostream>
using namespace std;

//Reverse a string

int main() {

    string a = "my name is husnain";
    int n = a.length();

    for(int i=n-1; i>=0; i--){
        cout<<a[i];
    }

    return 0;
}