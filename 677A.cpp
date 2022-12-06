#include <iostream>
using namespace std;

int main()
{
    int t,h;
    cin>>t>>h;
    int a[t],ct=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            ct++;
        }
        else
        {
            ct=ct+2;
        }
    }
    cout<<ct<<endl;
}