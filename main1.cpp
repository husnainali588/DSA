#include <iostream>
using namespace std;

int main() {

    string a = "my name is husnain";
    int n = a.length();

    for(int i=n; i>=0; i--){
        cout<<a[i];
    }

    return 0;
}