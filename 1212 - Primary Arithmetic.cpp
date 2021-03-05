#include<iostream>
using namespace std;
int main()
{
int long n1,n2,remn1,remn2;
while(cin>>n1>>n2)
{
if(n1==0 && n2==0)
{
break;
}
int long sum=0,operation=0,carry=0;
while(1)
{
remn1=n1%10;
remn2=n2%10;
sum=remn2+remn1+carry;
if(sum>=10)
{
operation++;
carry=1;
}
else
{
carry =0;
}
n1=n1/10;
n2=n2/10;
if(n1==0 && n2==0)
{
break;
}
}
if(operation==0)
{
cout<<"No carry operation."<<endl;
}
else if(operation==1){
cout<<"1 carry operation."<<endl;
}
else
{
cout<<operation<<" "<<"carry operations."<<endl;
}
}
return 0;
}
