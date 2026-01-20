#include <iostream>
using namespace std;

//figure out duplicate characters

int main() {

    string str = "husnain";
    int n = str.length();
    bool check = false;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(str[i]==str[j]){
                cout<<str[j];
                check = true;
            }
        }
    }

    if(check==false){
        cout<<"There are no duplicates";
    }
    
    return 0;
}