#include<iostream>
using namespace std;

int main()
{
int i, j, n;
cout<<"\n Enter how many lines? ";
cin>>n;
for(i=1; i<=n; i++)
{
    cout<<endl;
    for(j=1; j<=i; j++)
    {
        if(j%2==0)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
}
return 0;
}