#include<iostream>
using namespace std;
int main()
{

int n,d;
float x;
cin>>n;
int i=0;
while(i<n)
{
cin>>x;
d=0;
while(x>1)
{
x/=2;
d++;
}
cout<<d<<" dias"<<endl;
i++;
}
return 0;
}
