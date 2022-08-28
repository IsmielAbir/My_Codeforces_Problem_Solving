#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int p=0,q=0,r=0;
    for(int i=0;s[i];i++){
        if(s[i]=='1'){p++;q=0;}
        if(s[i]=='0'){p=0;q++;}
        if(p>6 || q>6)r++;

    }
    if(r)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

    return 0;
}