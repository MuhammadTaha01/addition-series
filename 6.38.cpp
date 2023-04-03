#include<iostream>
using namespace std;
int main()
{
    int i,j,sum;
    for(i=1; i<=5; i++)
    {
        cout<<'1';
        sum=1;
    for(j=2; j<=1; j++)
    {
        cout<<" + "<<j<<endl;
        sum=sum+j;
    }
        cout<<" = "<<sum<<endl;
    }
    return 0;
}
