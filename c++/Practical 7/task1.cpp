#include<iostream>
using namespace std;
int main()
{
int choice;
cout<<"\n1.year\n2.month\n3.day\n4exit\nEnter your choice:";
cin>>choice;
switch(choice)
{
case 1:cout<<"\nYear=2021\n";
break;
case 2:cout<<"\nMonth=october\n";
break;
case 3:cout<<"\nDay=thusrday\n";
break;
default:cout<<"\nOut of range\n";
break;
}
return 0;
}
