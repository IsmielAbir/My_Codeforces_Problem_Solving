#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n,c=1,ans=1;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   for(int i=0;i<n-1;i++){
       if(a[i]<=a[i+1]){
           c++;
           ans=max(c,ans);
       }
       else
       c=1;
   }
   cout<<ans<<endl;

    return 0;
}