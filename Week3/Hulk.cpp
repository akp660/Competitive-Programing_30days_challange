#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    string b = "I hate";
    string c = "I love ";
    string d ="I hate ";
    for (int i = 2; i <= a; i++)
    {
        if (i%2 != 0)
        {
            d += "that "+b;
        }
        
        if (i%2 == 0)
        {
            d += " that "+c;
        }
        
        
    }
    cout << d+ " it";
return 0;

}