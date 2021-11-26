#include<iostream>
using namespace std;
class Rajib
{
public:
	string title;
	int age;
	string school;
	void print()
	{
	cout<<age<<title<<school;	
	}
};
int main()
{
	Rajib raj;
	raj.age=21;
	raj.title="paul";
	raj.school="Bagnan High school";
	raj.print();
}

