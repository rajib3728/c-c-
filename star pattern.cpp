#include<iostream>
using namespace std;
int main()
{	
int i,j,k;
cout<<"star pattern";
cout<<"\n";
for(i=1;i<=7;i++)
{
	for(k=1;k<=7-i;k++)
	{
		cout<<" ";
	}
	for(j=1;j<=2*i-1;j++)
	{
		cout<<"*";
	}
	cout<<"\n";
}
for(i=2;i<=7;i++)
{
	for(k=1;k<=i-1;k++)
	{
		cout<<" ";
	}
	for(j=1;j<=15-2*i;j++)
	{
		cout<<"*";
	}
	
	cout<<"\n";
}
cout<<"\n";
for(i=1;i<=7;i++)
{
	for(j=1;j<=i;j++)
	{
		cout<<"*";
	}
	cout<<"\n";
}
for(k=1;k<=6;k++)
{  
for(j=1;j<=7-k;j++)
{
	cout<<"*";
}
cout<<"\n";
}
return 0;
}
