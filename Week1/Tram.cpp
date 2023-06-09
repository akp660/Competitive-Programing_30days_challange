#include <iostream>
using namespace std;
int main(){
    int n;
    int a;
    int b;
    int c=0;
    int d=0;
    cin >> n >>a >>b;
    for (int i = 0; i < n; i++)
    {
        c = b;
        cin >> a >>b;

        for (int j = 1; j < n+1; j++)
        {
            d=c+b-a;
            if (d<c)
            {
                d=c;
            }
            
        }
        
    }
    cout << d;
    return 0;
    
}