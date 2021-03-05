#include<iostream>
using namespace std;

long long int rec1(int n){

if(n==0)
{
return 1;
}

else{

return n*(rec1(n-1));
}

}

long long int rec2(int n){

if(n==0)
{
return 1;
}

else{

return n*(rec2(n-1));
}

}


int main()

{

int m,n;


while(!(cin>>m>>n).eof())
{


long long int fun1=rec1(m);
long long int fun2=rec2(n);
cout<<fun1+fun2<<endl;
}

return 0;
}
