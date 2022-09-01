#include <iostream>
using namespace std;

int main()
{
     int n;
    cin>>n;
    while(n--){
        int a,b,c=0;
        cin>>a>>b;
        if(a%b==0)
        cout<<"0"<<endl;
        else{
        c = a%b;
        cout<<b-c<<endl;
        }
    }
    return 0;
}