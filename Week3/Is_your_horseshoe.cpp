#include <iostream>
using namespace std;
int main (){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x;
    if (a == b || a == c || a==d)
    {
        x+=1;
    }
    if (b==c||b==d)
    {
        x+=1;
    }
    if (c==d)
    {
        x+=1;
    }
    cout << x;
return 0;
}