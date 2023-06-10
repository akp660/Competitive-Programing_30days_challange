#include <iostream>
using namespace std;
int main(){
    int n;
    int h;
    int a;
    int b=0;
    
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a>h)
        {
            b=b+1;
        }
        
    }
    int c=n+b;
    cout << c;
    return 0;
    
}