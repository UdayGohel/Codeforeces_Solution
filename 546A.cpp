#include<iostream>
using namespace std;

int main(){
    int a,b,c,sum=0;
    cin>>a>>b>>c;
    for(int i=0;i<=c;i++){
        sum=sum+(a*i);
    }
    if(b>sum)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<sum-b<<endl;
    }
}