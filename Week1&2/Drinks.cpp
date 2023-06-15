#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    float a;
    cin >> a;
    float z = a;

    for (int i = 1; i < n; i++)
    {
        float b;
        cin >> b;
        z = z+b; 
    }
    
    float c =  (z/n);
    cout << setprecision(12) << c;
    return 0;
}
 
