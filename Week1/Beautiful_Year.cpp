#include <iostream>
using namespace std;
int main(){
    int y;
    cin >> y;
    y = y+1;

    for (; true; )
    {
    int a = y/1000;
    int b = (y/100)%10;
    int c = (y/10)%10;
    int d = y%10;

        if (a==b || a==c || a==d || b==c || b==d || c==d)
    {
        y = y+1;
    }
    else{
        break;
    }
    }

    cout << y;
    return 0;  
}