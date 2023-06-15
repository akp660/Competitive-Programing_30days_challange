#include <iostream>
using namespace std;
int main(){
    int x;
    int z=0;
    cin >> x;
    
    // for (int i = 0; i < x; i++)
    // {
        if (x>=5)
        {
            z+=x/5;
            x=x%5;
        }
        if (x==4)
        {
            z=z+x/4;
        }
        if (x==3)
        {
            z=z+x/3;
        }
        if (x==2)
        {
            z=z+x/2;
        }
        if (x==1)
        {
            z=z+x/1;
        }

    // }

    cout << z;
    return 0;
}