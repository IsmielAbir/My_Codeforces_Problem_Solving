#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int p=0,q=0;
    for(int i=0;s[i];i++){
        if(s[i]>='A' && s[i]<='Z')
        p++;
        else if(s[i]>='a' && s[i]<='z')
        q++;
    }
   
    if(p>q){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
    }
    
    else{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    }
    

    return 0;
}