#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t],ct=0;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            ct++;
        }
    }
    if(ct==0)
    {
        cout<<"EASY"<<endl;
    }
    else
    cout<<"HARD"<<endl;
}