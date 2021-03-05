#include<iostream>
using namespace std;
int main()
{
long long int a,b,t;
while(!(cin>>a>>b).eof())
{
if(b>a)
{
t=a;
a=b;
b=t;
}
cout<<a-b<<endl;
}
return 0;
}
