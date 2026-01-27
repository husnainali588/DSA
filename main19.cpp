#include <iostream>
using namespace std;

//replace spaces with %20 like urlify

void urlify(string &s) {
    int originalLength = s.length();
    int spaceCount = 0;

    for(int i=0; i<originalLength; i++) {
        if(s[i]==' ') {
            spaceCount++;
        }
    }

    if(spaceCount==0){
        return;
    }

    int newLength=originalLength+(spaceCount*2);
    int j = newLength-1;
    s.resize(newLength);

    for(int i = originalLength-1; i>=0; i--){
        if(s[i]==' '){
            s[j]='0';
            s[j-1]='2';
            s[j-2]='%';
            j-=3;
        } else {
            s[j]=s[i];
            j--;
        }
    }
}

int main() {
    string str = "get pictures from google";
    urlify(str);
    cout<<str;
    
    return 0;
}