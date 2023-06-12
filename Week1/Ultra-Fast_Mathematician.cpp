#include <iostream>
using namespace std;
int main(){
    string a = 1010100;
    string b = 0100101;
    string c = a;
    //cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i]==b[i])
        {
            c[i]=0;
        }
        else
        {
            c[i]=1;
        } 
    }
    cout << c;
return 0;
    
}