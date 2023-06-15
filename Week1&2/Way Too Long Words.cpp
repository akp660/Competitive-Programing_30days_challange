#include <iostream>
using namespace std;

int main() {

int n;
cin >> n;

for (int a=0; a<n; a++){

    string word;
    cin >> word;

    int wordLength = word.length();
    if(wordLength <= 10 ){
        cout << word <<endl;
    }
    else {
        cout << word[0] << wordLength-2 <<word[wordLength-1] <<endl;
    }

    }
    return 0;
}