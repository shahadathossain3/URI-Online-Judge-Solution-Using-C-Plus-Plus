#include<iostream>
using namespace std;
int main()
{
    int N[10],v,i;
    i=0;
    cin>>v;
    while(i<10)
    {
        N[i]=v;
        cout<<"N["<<i<<"] = "<<N[i]<<endl;
        v=v*2;
        i++;
    }
    return 0;
}
