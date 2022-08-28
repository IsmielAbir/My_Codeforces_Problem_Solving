#include <bits/stdc++.h>

using namespace std;

int main()
{
   
    int q=0;
string s;
cin>>s;
for(int i=0;s[i];i++){
if(s[i]=='Q'||s[i]=='H'||s[i]=='9')
q=1;
}
 
if(q==1)
cout<<"YES";
else
cout<<"NO";

    return 0;
}