#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,m,c=0;
   cin>>n>>m;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i]>m){
           c++;
       }
       c++;
       
   }
   cout<<c<<endl;
    
    
    return 0;
}