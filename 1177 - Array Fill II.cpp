#include<iostream>
using namespace std;
int main()
{
    int N[1000],i,p,a,j,k;
    i=0;
    p=0;
    cin>>a;
    j=0;
       while(j<=a,p<1000)
       {
           cout<<"N["<<p<<"] = "<<j<<endl;
           //i=i+1;
           j++;
           p++;
           if(j==a)
           {
               j=0;
           }
       }
    return 0;
}
