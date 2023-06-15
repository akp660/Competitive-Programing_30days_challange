#include <iostream>

using namespace std;

int main(){
    string a;
    string b;

    cin >> a >> b ;

   for (int i = 0; i < a.length(); i++)
   {
    if (a[i] > 96 )
    {
        a[i]-=32;
    }
    if (b[i]>96)
    {
        b[i]-=32;
    }    
   }

   if (a==b)
   {
    cout << "0";
   }
   else {
    if (a<b)
        {
            cout << "-1";
        }
        else{
            cout << "1";
        }
        
    }
   
   

return 0;
}