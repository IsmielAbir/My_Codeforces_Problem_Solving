#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long int n;
   cin>>n;
   for(int i=0;i<n;i++){
      long long int a,b;
       cin>>a>>b;
       if((a%2==b%2) && (a>=b*b))
          
            cout<<"YES"<<endl;
       else
       cout<<"NO"<<endl;
       
     
   }
   

    return 0;
}