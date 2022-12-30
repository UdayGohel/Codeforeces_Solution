#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,ct=0;
        cin>>a>>b>>c>>d;
        if(a<b)
        {
            ct++;
        }
        if(a<c)
        {
            ct++;
        }
        if(a<d)
        {
            ct++;
        }
        cout<<ct<<endl;
    }
}