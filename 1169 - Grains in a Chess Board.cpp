#include<iostream>
#include<math.h>
using namespace std;
int main()
{

int n,x;
long long int kg,gram,grain;
cin>>n;
int i=0;
while(i<n)
{
cin>>x;
kg=pow(2,x)/12000;
cout<<kg<<" kg"<<endl;
i++;
}
return 0;
}
