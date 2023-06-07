#include <iostream>
using namespace std;
int main(){
    string a;
    int b=0;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        if (91>a[i])
        {
            b= b+1;
        }
        
    }

    if (b>(a.length()/2))
    {
        for (int j = 0; j <a.length() ; j++)
        {
           if (a[j]>96)
           {
            a[j]=a[j]-32;
           }
           
        }
        
    }

    else{
        for (int k = 0; k <a.length() ; k++)
        {
           if (91>a[k])
           {
            a[k]=a[k]+32;
           }
           
        }
    }

    cout << a;
    
    return 0;
}
