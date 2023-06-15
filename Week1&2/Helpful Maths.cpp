#include<iostream>

using namespace std;

int main() {
string n;
int b;

cin>>n;

for (int i = 0; i < n.length(); i+2)
{

    for (int j = 0; i < n.length(); j+2)
    {
        if (n[i]>n[j])
        {
            b = n[i];
            n[i]=n[j];
            n[j]= n[i];
        }
        
    }
    
}

cout << n;

return 0;

}
