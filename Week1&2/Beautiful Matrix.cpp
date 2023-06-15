#include <iostream>

using namespace std;

int main(){
int a = 5;
int b = 5;
int c;
int d;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cin >> c;
            if (c==1)
            {
                d = abs(i-2)+abs(j-2);
            }
            
        }
        
    }
    cout << d;
return 0;
}