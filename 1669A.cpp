#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(a>=1600 && a<=1899 ) //1600≤rating≤1899
        {
            cout<<"Division 2"<<endl;
        }
        else if(a<=1599 && a>=1400) //1600≤rating≤1899
        {
            cout<<"Division 3"<<endl;
        }
        else if(a<=1399 ) //1600≤rating≤1899
        {
            cout<<"Division 4"<<endl;
        }

    }
}