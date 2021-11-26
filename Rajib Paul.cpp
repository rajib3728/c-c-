#include <iostream>
using namespace std;
int main()
{	
    long long n;
	cin>>n;
    if((n&(n-1))==0)
	{ 
	cout <<n<< endl;
    }
    else 
	{
	cout << ((n-(1LL<<(63 - __builtin_clzll(n))))<<1) << endl;
    }
   return 0;
}
