#include <iostream>
using namespace std;

string arrangeString(string s){
    int s_len = s.length();
    int n1=0,n2=0,n3=0;
    for(int i=0; i<s_len; i+=2){
        if(s[i] == '1'){
            n1+=1;
        }
        else if(s[i] == '2'){
            n2+=1;
        }
        else if(s[i] == '3'){
            n3+=1;
        }
    }

    for(int i=0; i<n1*2; i+=2){
        s[i] ='1';
    }
    for(int i=0; i<n2;i+=2 ){
        s[i+n1*2] = '2';
    }
    for(int i=0; i<n3;i+=2 ){
        s[i+(n1+n2)*2] = '3';
    }

    return s;

}

string sortString(string s){
    int count1 = 0, count2 = 0, count3 = 0;
    string temp = "";

    for (int i=0; i<s.length(); i+=2){
        if (s[i] == '1') count1 += 1;
        else if (s[i] == '2') count2 += 1;
        else count3 += 1;
    }

    while (count1--){
        temp += "1+";
    }
    while (count2--){
        temp += "2+";
    }
    while (count3>1){
        temp += "3+";
        count3 -= 1;
    }

    if (count3) temp += "3";

    return temp;
}
int main(){

    string s;
    cin>>s;
    cout<<arrangeString(s)<<endl;

    return 0;

}


