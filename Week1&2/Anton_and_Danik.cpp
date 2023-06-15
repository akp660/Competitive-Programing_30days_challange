#include <iostream>
using namespace std;
int main(){
    int n;
    string s;
    int a=0;
    int b=0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='A')
        {
            a =a+1;
        }
        if (s[i]=='D')
        {
            b=b+1;
        }
    }  
    if (a>b)
    {
        cout << "Anton";
    }
    if (a<b)
    {
        cout << "Danik";
    }
    if (a==b)
    {
        cout << "Friendship";
    }
    return 0;   
}