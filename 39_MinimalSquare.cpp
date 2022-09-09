#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a<b)
      swap(a,b);
      c=max(a, b*2);
      cout<<c*c<<endl;
      
    }

    return 0;
}