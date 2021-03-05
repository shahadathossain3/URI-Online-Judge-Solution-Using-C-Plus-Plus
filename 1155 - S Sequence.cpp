#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double s,i,j,k;
    i=1;
    s=0;
    k=0;
    while(i<=100)
    {
        k++;
        s=s+1.0/i;
        i++;
    }
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}