#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a=100, b=13;
    for (int i = 0; i < n; i++)
    {
        //cin >> a >> b;
        if (a==b)
        {
            cout << 0;
        }
        if (a>b)
        {
            int c = (a%b);
            cout << b-c;
        }
        if (a<b)
        {
            int d = (b-a);
            cout << d;
        }   
    }
return 0; 
}