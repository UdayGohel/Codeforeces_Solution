#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a[t],ct=0,ct1=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        ct++;
        if(a[i]==a[i+1])
        {
            ct--;
        }

    }
    cout<<ct+ct1<<endl;
}