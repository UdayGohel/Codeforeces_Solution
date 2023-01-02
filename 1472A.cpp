#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t; 
    while(t--)
    {
        int n,sum=0,count=0,count1=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]==2)
            {
                count++;
            }
            if(a[i]==1){
                count1++;
            }
        }
        if(sum%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
           
            if((sum/2) % 2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                if(count1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
     
           
        }
    }