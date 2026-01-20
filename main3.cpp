#include <iostream>
using namespace std;

//removes duplicates

int main() {
    
    string str = "husnain";
    int n = str.length();
    bool check = false;

    for(int i=0; i<n; i++){
        check = false;
        for(int j=i+1; j<n; j++){
            if(str[i]==str[j]){
                check=true;
            }
            if(check==false){
                cout<<str[i];
            }
        }
    }

    return 0;
}