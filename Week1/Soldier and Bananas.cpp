#include <iostream>

using namespace std;

int main(){
    int k;
    int n;
    int w;
    int a = 0;
    cin >> k>>n>>w;
    for (int i = 1; i <= w; i++)
    {
        a=a+i*k;
    }

    if (a>n)
    {
        cout << a-n;
    }
    else{
        cout << 0;
    }
    
return 0;   
    
}