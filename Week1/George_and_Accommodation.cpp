#include <iostream>
using namespace std;
int main(){
    int n;
    int p;
    int q;
    int a=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        if ((q-p)>=2)
        {
            a =a+1;
        }
        
    }
    cout << a;
    return 0;
}