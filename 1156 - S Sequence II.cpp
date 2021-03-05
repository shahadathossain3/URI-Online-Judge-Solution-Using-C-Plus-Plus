#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a,s,b;
    int i;
    i=1;
    a=1;
    s=0;
    while(i<=39)
    {
        if(i%2!=0)
        {
            s=s+i/a;
            a=2*a;
        }
        i++;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}
