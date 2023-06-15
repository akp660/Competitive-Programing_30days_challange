#include <iostream>

using namespace std;

int main(){
int j=0;
int a;
cin >> a;
for (int b=0; b<a ; b++) {
int x,y,z;
cin >> x >> y >> z;
if (x+y+z > 1 )
{
    j = j+1;
}

};
cout << j;
return 0;
}
