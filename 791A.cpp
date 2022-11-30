#include <iostream>
using namespace std;

int main()
{
    int a,b,ct=0;
    cin>>a>>b;
   int i=20;
   if(a==b){
            ct++;
            goto rep;
        }
   while(i--)
   {
        
        if(a<=b){
            ct++;
        }
        if(a>b){
            break;
        }

        a=a*3;
        b=b*2;
   }
   rep:
    cout<<ct<<endl;
}