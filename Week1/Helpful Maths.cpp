#include<iostream>

using namespace std;

int main() {
string n;
string b;

cin>>n;

for (int i = 0; i < n.length(); i+2)
{
    if (n[i]<n[i+2])
    {
        b = n[i];
        n[i] = n[i+2];
    }
    
    
}

cout << n;

return 0;

}
