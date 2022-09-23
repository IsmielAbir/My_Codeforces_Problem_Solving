#include <bits/stdc++.h>
using namespace std;

int main()
{
  
  int n,a,b,c,s=0;
  cin>>n>>a>>b;
  c=n-b;
  for(int i=1;i<=n;i++){
      if(i>a && i>=c)
      s++;
  }
       cout<<s<<endl;
     
  
   

    return 0;
}