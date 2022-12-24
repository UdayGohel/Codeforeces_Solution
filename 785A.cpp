#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    string a;
    string b="Icosahedron",c="Cube",d="Tetrahedron",e="Dodecahedron",f="Octahedron";
    while(n--)
    {
        cin>>a;
        if(a==d)
        {
            sum=sum+4;
        }
        else if(a==c)
        {
            sum=sum+6;
        }
        else if(a==f)
        {
            sum=sum+8;
        }
        else if(a==e)
        {
            sum=sum+12;
        }
        else if(a==b)
        {
            sum=sum+20;
        }
    }
    cout<<sum<<endl;
}