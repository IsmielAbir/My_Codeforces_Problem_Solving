#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n,c=0,d=0;
   string s;
   cin>>n>>s;
   for(int i=0;i<n;i++){
       if(s[i]=='A')
       c++;
       else if(s[i]=='D')
       d++;
   }
   if(c==d)
   cout<<"Friendship"<<endl;
   else if(c>d)
   cout<<"Anton"<<endl;
   else
   cout<<"Danik"<<endl;
   

    return 0;
}