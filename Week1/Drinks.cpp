#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a;
    cin >> a;
    int z = a;

    for (int i = 1; i < n; i++)
    {
        int b;
        cin >> b;
        z = z+b; 
    }
    
    int c = abs(z/n);
    cout << c;
    return 0;
}
 