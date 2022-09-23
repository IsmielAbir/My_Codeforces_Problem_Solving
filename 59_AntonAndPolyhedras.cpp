#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,c=0;
  cin>>n;
  string s[n];
  for(int i=0;i<n;i++){
      cin>>s[i];
      if(s[i]=="Icosahedron")
      c+=20;
      else if(s[i]=="Cube")
      c+=6;
      
        else if(s[i]=="Tetrahedron")
      c+=4;
        else if(s[i]=="Dodecahedron")
      c+=12;
      else if(s[i]=="Octahedron")
      c+=8;
      
  }
  cout<<c<<endl;
  
}