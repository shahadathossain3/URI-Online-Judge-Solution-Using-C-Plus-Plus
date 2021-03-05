#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double A[100],j,k,l;
    int i;
    i=0;
    while(i<100)
    {
        cin>>A[i];
        if(A[i]<=10)
        {
           cout<<"A["<<i<<"] = "<<fixed<<setprecision(1)<<A[i]<<endl;
        }
        i++;
    }
    return 0;
}
