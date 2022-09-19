#include<iostream>
using namespace std;
int main(){
    string s, b="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.')
        b+="0";
        else if(s[i+1]=='-'){
            b+="2";
            i++;
        }
        else {
            b+="1";
            i++;
        }
    }
    cout<<b<<endl;
    return 0;
}