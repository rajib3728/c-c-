#include<iostream>
using namespace std;
class emp{
public:	
	string Name;
	string Company;
	int age;
	void Introduce()
	{
		cout<<Name<<"\n";
		cout<<Company<<"\n";
		cout<<age<<"\n";
		}
		emp(string name,string company,int Age)//constructor
		{
			Name=name;
			Company=company;
			age=Age;
			}	
};
int main()
{
  emp employee1=emp("Rajib","EY",21);
  employee1.Introduce();
  
}
