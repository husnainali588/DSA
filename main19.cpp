#include <iostream>
using namespace std;

void urlify(string &s) {
    int OriginalLength = s.length();
    int countSpace = 0;
    
    //count spaces 
    for(int i=0; i<OriginalLength-1; i++) {
        if(s[i]==' '){
            countSpace++;
        }
    }
    if(countSpace==0) return;

    //initialize new length
    int newLength = OriginalLength + (countSpace*2);
    int j=newLength-1;

    s.resize(newLength);

    for(int i=OriginalLength-1; i>=0; i--) {
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
    string str = "hello world gemini";
    urlify(str);
    cout << "URLified: '" << str << "'" << endl;
    return 0;
}