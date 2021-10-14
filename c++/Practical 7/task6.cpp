#include<iostream>
using namespace std;
int main()
{
int r,c,i,j,arr[20][20];
cout<<"Enter number of rows:";
cin>>r;
cout<<"Enter number of columns:";
cin>>c;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(j>=c-i)
{
cout<<"*"<<" ";
}
else
{
cout<<" ";
}
}
cout<<"\n";
}
return 0;
}
