#include <iostream>
using namespace std;

//find first non repeating character

int main() {

    string str = "swwiisiq";
    int n = str.length();
    int count = 0;
    
    for(int i=0; i<n; i++){
        count = 0;
        for(int j=0; j<n; j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count==1){
            cout<<str[i];
            return 0;
        }
    }

    return 0;
}