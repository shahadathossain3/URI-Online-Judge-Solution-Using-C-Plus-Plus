#include<iostream>
using namespace std;
int main()
{
    int N[20],i,k,j;
    i=0;
    j=19;
    k=0;
    while(i<20)
    {
        cin>>N[i];
        i++;
    }
    while(j>=0)
    {
        cout<<"N["<<k<<"] = "<<N[j]<<endl;
        k++;
        j--;
    }
    return 0;
}

