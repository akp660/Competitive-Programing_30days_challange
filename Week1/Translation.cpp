#include <iostream>
using namespace std;
int main(){

    string a;
    string b;
    int c=0;
    int j=0;

    cin >> a >> b;
        for (int i = a.length()-1; i < a.length()+1; i--)
    {
        
            if (a[i]==b[j])
            {
                c=c+1;
            } 
        j=j+1;
    } 
    if (c== a.length())
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
return 0;
}
