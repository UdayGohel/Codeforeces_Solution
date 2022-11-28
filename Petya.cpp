#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[100],b[100];
    cin>>a>>b;
    for(int i=0;i<sizeof(a);i++)
    {
        if(a[i]<='Z' && a[i]>='A')
        {
            a[i]=a[i]+32;
        }
        if(b[i]<='Z' && b[i]>='A')
        {
            b[i]=b[i]+32;
        }
    }
    int k;
    k=strcmp(a,b);   
    if(k>0)
    {
            k=1;
    }
    else if(k<0)
    {
        k=-1;
    }
    cout<<k<<endl;
    
}