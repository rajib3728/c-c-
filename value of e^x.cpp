#include<iostream>
using namespace std;
int fact(int i)
{
	if(i==0)
	{
		return 1;
	}
	else
	{
		return i*fact(i-1);
	}
}
int pow(int x,int i)
{
	if(i==0)
	{
		return 1;
	}
	else
	{
		return x*pow(x,i-1);
	}
}
int main()
{
	int x,i;
	double sum=0.0000000f;
	cout<<"This program is for finding e^x:"<<"\n";
	cout<<"Enter the value of x: ";
	cin>>x;
	for(i=0;i<10000;i++)
	{
	sum=sum+pow(x,i)/fact(i);	
	}
	cout<<"Value of e^x is: "<<sum;
	return 0;
}
