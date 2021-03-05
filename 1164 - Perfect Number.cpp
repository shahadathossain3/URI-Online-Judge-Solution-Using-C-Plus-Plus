#include<iostream>
using namespace std;
int main()
{
    int a,i,s,k,j,p;
    cin>>p;
    j=1;
    do{
    cin>>a;
    i=1;
    s=0;
        while(i<=a)
    {
        if(a%i==0)
        {
            s+=i;
        }
        i++;
    }
    k=s/2;
    if(a==k)
    cout<<k<<" "<<"eh perfeito"<<endl;
    else
        cout<<a<<" "<<"nao eh perfeito"<<endl;
        j++;
      }  while(j<=p);
    return 0;
}
