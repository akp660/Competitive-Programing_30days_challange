#include <iostream>
using namespace std;
int main(){
    string n;
    int a=0;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i]=='7'||n[i]=='4')
        {
            a= a+1;
        }
        
    }
    if (a == 4 || a ==7)
    {
        cout << "YES";
    
    }
    else{
        cout << "NO";
    }
    return 0;
    
    
}