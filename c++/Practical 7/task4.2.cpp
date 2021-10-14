#include <iostream>
using namespace std;
int main()
{
int r,c,i,j,arr[20][20];
cout<<"\nEnter the number of rows\n";
cin>>r;
cout<<"\nEnter the number of columns\n";
cin>>c;
cout<<"Enter the elements of matrix:\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>arr[i][j];
}
}
cout<<"\nThe entered matrix is:\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<arr[i][j]<<" ";
}
cout<<"\n";
}
cout<<"\nMatrix after evaluation:\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<arr[i][2]/3<<" "; 
}
cout<<"\n";
}
return 0;
}
