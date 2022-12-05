#include <iostream>
using namespace std;

int main()
{
     long long int n,rem;
    cin>>n;
    int c=0,c1=0;
    if(n==7 || n==4)
    {
        cout<<"NO"<<endl;
        goto end;
    }
    while(n)
    {
        c++;
        rem =n%10;
        if(rem == 4 || rem == 7)
        {
            c1++;
        }
        n=n/10;
    }
    if(c1==4 || c1==7)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    end:
    //4744000695826
    return 0;
}