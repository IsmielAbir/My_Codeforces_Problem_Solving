#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=1,d=0;
    cin>>n;
    string s,s1,s2;
    cin>>s;
    for(int i=0;i<n-1;i++){
        cin>>s1;
        if(s==s1)
        c++;
        else{
            s2=s1;
            d++;
        }

    }
    if(c>d)
    cout<<s<<endl;
    else
    cout<<s2<<endl;
}