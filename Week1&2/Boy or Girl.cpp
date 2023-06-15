#include <iostream>

using namespace std;

int main(){
string a;
cin >> a;
int b=0;

for (int i = 0; i < a.length(); i++)
{
    bool flag=true;

    for (int j = i+1; j < a.length(); j++)
    {
        if (a[i] == a[j])
            {
                flag=false;
            }
    }   
    if (flag) b+=1;
}


if (b%2 == 0)
{
    cout << "CHAT WITH HER!";
}
else{
    cout << "IGNORE HIM!";
}

return 0;
}