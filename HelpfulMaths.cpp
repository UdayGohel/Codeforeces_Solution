#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[10000];
    cin>>a;
    // char temp;
   
    for(int i=0;i<strlen(a);i=i+2)
    {
        for(int j=i+2;j<strlen(a);j=j+2){
        if(a[i]>a[j])
        {
            char temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        }
    }
   cout<<a;
    
}