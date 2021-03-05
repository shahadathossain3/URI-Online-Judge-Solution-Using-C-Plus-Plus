#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,s,e,f,x,y,i,j;
    while(true)
    {
       s=0;
       e=0;
       c=0;
       b=0;
       j=1;
       cin>>x;
       if(x==0)
        break;
       if(x%2==0)
       {
       do
       {
          c=x+e;
          e=e+2;
          s=s+c;
          j++;
       }while(j<=5);
       }
       if(x%2!=0)
       {
           b=x+1;
        do
           {
              c=b+e;
              e=e+2;
              s=s+c;
              j++;
           }while(j<=5);
       }
       cout<<s<<endl;
    }
    return 0;
}