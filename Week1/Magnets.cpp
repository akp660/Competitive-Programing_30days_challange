#include <iostream>
using namespace std;
int main(){
    int n;
    int z = 1;
    cin >> n;
    int a = n;


    string m;
    cin >> m;
    int b = m[0];
    int c = m[1];

    for (int i = 1; i < a; i++)
    {
        string n;
        cin >> n;
        int d = n[0];
        int e = n[1];

        if (c == d)
        {
            z=z+1;
        } 

        b = d;
        c = e;

    }
    cout << z;
    return 0;
    
}