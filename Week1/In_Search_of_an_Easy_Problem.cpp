#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int b=0;
    int a=0;
    for (int i = 0; i < n; i++)
    {
        cin >> b;

        if (b == 1)
        {
            a=a+1;
        }
        
    }
    if (a>0)
    {
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
    
    return 0;
    
}