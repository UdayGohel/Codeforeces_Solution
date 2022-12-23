#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>=b && a>=c)
    {
        if(b>=c)
        {
            cout<<(b-c)+(a-b);
        }
        else
        {
            cout<<(a-c)+(c-b);
        }
    }
    else if(b>=a && b>=c)
    {
        if(a>=c)
        {
            cout<<(a-c)+(b-a);
        }
        else
        {
            cout<<(b-c)+(c-a);
        }
    }
    else
    {
        if(b>=a)
        {
            cout<<(c-b)+(b-a);
        }
        else
        {
            cout<<(c-a)+(a-b);
        }
    }
}