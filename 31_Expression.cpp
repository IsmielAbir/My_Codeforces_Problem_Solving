#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int a1=a+b*c;
    int a2=a*(b+c);
    int a3=a*b*c;
    int a4=(a+b)*c;
    int a5=a+b+c;
    cout<<max(a1,max(a2,max(a3,max(a4,a5))));
    return 0;
}