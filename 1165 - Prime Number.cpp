#include<iostream>
using namespace std;
int main()
{
    int a,i,j,ck,k;
    cin>>k;
    j=1;
    while(j<=k)
    {
    cin>>a;
    i=2;
    ck=1;
    while(i<a)
    {
        if(a%i==0)
        {
            ck=0;
        }
        i++;
    }
    if(ck==1)
    {
        cout<<a<<" "<<"eh primo"<<endl;
    }
    else
        cout<<a<<" "<<"nao eh primo"<<endl;
    j++;
    }
    return 0;
}
