#include <bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(tolower(s[0]) == 'y' && tolower(s[1]) == 'e' && tolower(s[2]) == 's')

        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }

    return 0;
}