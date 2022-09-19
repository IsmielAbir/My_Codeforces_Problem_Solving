#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c=0;
    cin>>n;
 
    for(int i=0;i<n;i++){
       cin>>a>>b;
       if(a!=b)
       c=1;
    }
    if(c==1)
    cout<<"Happy Alex"<<endl;
    else
    cout<<"Poor Alex"<<endl;
    
    return 0;
}