#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d,ct=0;
    cin>>a>>b>>c>>d;
    if(a==b || a==c || a==d)
    {
        ct++;
    }
     if(b==c || b==d)
    {
        ct++;
    }
     if(c==d)
    {
        ct++;
    }
    cout<<ct<<endl;

}