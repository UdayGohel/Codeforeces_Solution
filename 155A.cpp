#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,min,max,ct=0;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for(int i=1;i<t;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            ct++;
        }
         if(max<a[i])
        {
            max=a[i];
            ct++;
        }
    }
    cout<<ct<<endl;
}