#include<iostream>
using namespace std;

int main()
{
int i, j, k;
int n;
cout<<"\n Enter how many lines";
cin>>n;
for(i=1; i<=n; i++)
{
    cout<<endl;
    for(k=1; k<=n-i; k++)
    {
        cout<<" ";
    }
    for(j=1; j<=i ; j++)
    {
        cout<<j;
    }
    for(j=i-1; j>=1; j--)
    {
        cout<<j;
    }
}
return 0;
}