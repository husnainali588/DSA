#include <iostream>
using namespace std;

//counting occurance of chars

int main() {
    
    string str = "swwiisiq";
    int n = str.length();
    int count = 0;
    bool found = false;

    for(int i=0; i<=n-1; i++){
        count=0;
        found=false;
        for(int k=i-1; k>=0; k--){
            if(str[i]==str[k]){
                found=true;
                break;
            }
        }
        if(found==false){
            for(int j=i; j<=n-1; j++){
                if(str[i]==str[j]){
                    count++;
                }
            }
            cout<<str[i]<<" = "<<count<<endl;
        }
    }

    return 0;
}