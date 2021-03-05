#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,s,e,f,x,y,i,j;
    i=1;
    cin>>a;
    while(i<=a)
    {
       //cin>>x>>y;
       s=0;
       e=0;
       c=0;
       b=0;
       cin>>x>>y;
       if(x%2==0)
       {
           b=x+1;
       for(j=1; j<=y; j++)
       {
          c=b+e;
          e=e+2;
          s=s+c;
       }
       }
       if(x%2!=0)
       {
           for(j=1; j<=y; j++)
           {
              c=x+e;
              e=e+2;
              s=s+c;
           }
       }
       cout<<s<<endl;
       i++;
    }
    return 0;
}