#include <iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int h,m;
   for(int i=1;i<=n;i++){
       cin>>h>>m;
        int x=h*60;
   int y=x+m;
   int z=1440-y;
   cout<<z<<endl;
   }
  
    return 0;
}