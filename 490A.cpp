#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,c=0,c1=0,c2=0;
    cin>>t;
    int a[t];
    for(int i=1;i<=t;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            c++;
        }
        if(a[i]==2)
        {
            c1++;
        }
        if(a[i]==3)
        {
            c2++;
        }
    }
    int b=min(c1,c2);
    b=min(c,b);
    int x=1,y=1,z=1;
    int a1[t],a2[t],a3[t];
    cout<<b<<endl;
    for(int i=1;i<=t;i++)
    {
        if(a[i]==1)
        {
            a1[x]=i;
            x++;
        } 
        if(a[i]==2)
        {
            a2[y]=i;
            y++;
        } 
        if(a[i]==3)
        {
            a3[z]=i;
            z++;
        }   
    }
     for(int i=1; i<=b; i++)
    {
        cout<<a1[i]<<" "<<a2[i]<<" "<<a3[i]<<endl;
    }
}