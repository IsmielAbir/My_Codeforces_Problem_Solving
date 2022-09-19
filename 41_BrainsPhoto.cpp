
#include <bits/stdc++.h>

using namespace std;

int main()
{
   
    int a,b,c=0;
    cin>>a>>b;
    char s[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>s[i][j];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(s[i][j]=='C' || s[i][j]=='M' || s[i][j]=='Y')
            c++;
        }
    }
    if(c==0)
    cout<<"#Black&White"<<endl;
    else
    cout<<"#Color"<<endl;
    return 0;
}