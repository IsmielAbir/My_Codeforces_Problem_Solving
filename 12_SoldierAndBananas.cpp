#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,w,c=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        c+=i*k;
    }
    if(c>n)
    cout<<c-n<<endl;
    else
    cout<<"0"<<endl;
   
    return 0;
}