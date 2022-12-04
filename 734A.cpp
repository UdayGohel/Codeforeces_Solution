#include <iostream>
using namespace std;

int main()
{
    int t,ct=0,ct1=0;
    cin>>t;
    char a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]=='A')
        {
            ct++;
        }
        else
        {
            ct1++;
        }
    }
    // cout<<ct<<endl<<ct1<<endl;
    if(ct>ct1)
    {
        cout<<"Anton"<<endl;
    }
    else if(ct==ct1)
    {
        cout<<"Friendship"<<endl;
    }
    else
    {
        cout<<"Danik"<<endl;
    }
    return 0;
}