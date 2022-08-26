#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[1]=='+')
        c++;
        else if(s[1]=='-')
        c--;
    }
    cout<<c<<endl;

    return 0;
}