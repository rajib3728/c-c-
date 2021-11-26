#include<iostream>
using namespace std;
int main()
{
	int i,n,a[100],k,m,b[100],c[100];
	while(1)
	{
	cout<<"ENTER THE HOW MANY NUMBER YOU WANT TO ADD:"<<"\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"ENTER "<<i<<" NO:";
		cin>>a[i];
		cout<<endl;
	}
	cout<<"ENTER SPECIFIC POSITION YOU WANT TO ADD NO:";
	cin>>k;
	cout<<"ENTER WHICH NO YOU WANT TO ADD:"<<"\n";
	cin>>m;
	for(i=k;i<n;i++)
	{
	b[i+1]=a[i];	
	}
	
	for(i=0;i<=n;i++)
	{
		if(i<k)
		{
			c[i]=a[i];
		}
		else if(i==k)
		{
			c[i]=m;
		}
		else
		{
			c[i]=b[i];
		}
	}
	cout<<"NEW ARRAY IS:"<<"\n";
	for(i=0;i<=n;i++)
	{
		cout<<c[i];
	}
}
	return 0;
}

