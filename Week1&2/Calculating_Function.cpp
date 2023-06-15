#include <iostream>
using namespace std;
int main  (){
    long long int n;
    long long int a = 0;
     cin >> n;
   
        if (n%2 == 0)
        {
            a=n/2;  
        }
        
        else{
            a=(-1*(n+1)/2);
        }
    
    cout << a;
    return 0;
}