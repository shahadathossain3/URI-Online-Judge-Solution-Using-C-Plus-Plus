#include<iostream>
#include<math.h>
using namespace std;
int main()
{

long long int x,root,prime,i,n,j;
i=0;
cin>>n;
while(i<n)
{
cin>>x;
j=2;
root=sqrt(x);
prime=1;
while(j<=root)
{

if(x%j==0)
{
prime=0;
break;
}
j++;

}
if(prime==0)
{
cout<<"Not Prime"<<endl;
}
else
{
cout<<"Prime"<<endl;
}
i++;
}
return 0;
}
