#include <iostream>
using namespace std;

//Reverse each word in string

int main() {

    string str = "my name is husnain";
    str+= " ";
    int n = str.length();
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(str[j]==' '){
                for(int k=j-1;k>=i;k--){
                    cout<<str[k];
                }
                cout<<" ";
                i=j+1;
            }
        }
    }

    return 0;
}