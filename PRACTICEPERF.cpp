#include<iostream>
using namespace std;
int main()
{
    int i,x=0;
    int a[4];
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<4;i++)
    {
        if(a[i]>=10)
        {
            x=x+1;
        }
    }
    cout<<x<<endl;
    return 0;
}