 #include<iostream>
 using namespace std;
 int isPrime( int n);
 int i;
 int main()
 {
     long int n,a,b;

     cin>>n;

     a=4;
     b=n-4;

     for ( i=1; i<=n; i++)
     {
         int m=isPrime(a);
         int n=isPrime(b);
        //1cout<<a<<" "<<m<<" "<<b<<" "<<n<<endl;
         if ( n==1 && m==1 )
         {
             cout<<a<<" "<<b<<endl;
             return 0;
         }
         a++;
         b--;
     }
 }
 int isPrime( int k)
 {

     for ( i=2; i<k; i=i+1)
     {
         if( k%i==0)
         {
             return 1;

         }
     }
     return 0;
 }