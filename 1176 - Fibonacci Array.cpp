#include<iostream>
using namespace std;
int main()
{
    long long int a,b,n,k,c,i,j;
    i=1;
    cin>>n;
    while(i<=n)
    {
      a=0;
      b=1;
      cin>>k;
      for(j=0; j<=k; j++)
      {
          if(j==k)
          {
              cout<<"Fib"<<"("<<k<<") = "<<a<<endl;
          }
          c=a+b;
          a=b;
          b=c;
      }
      i++;
    }
    return 0;
}