#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string a;
    while(t--)
    {
        cin>>a;
        if(a.length()<=10)
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a[0]<<a.length()-2<<a[a.length()-1]<<endl;
        }
    }
}