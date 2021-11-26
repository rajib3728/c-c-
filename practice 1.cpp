#include<iostream>
#include<string>
using  namespace std;
class employee{
private:
	string name;
	int id;
	int salary;
public:
	void show()
	{
	cout<<name<<" ";
	cout<<id<<" ";
	cout<<salary<<" ";
	cout<<endl;	
	}
	employee(string Name,int Id,int Salary)
	{
		 name=Name;
		 id=Id;
		 salary=Salary;
	}
};
int main()
{
 /*employee emp1;
 emp1.id=3214;
 emp1.name="Rajib";
 emp1.salary=3000000;
 emp1.show();*/
 // constructor
 employee emp2=employee("rajib",1234,400000);
 emp2.show();
 
 //encapsulation
 //abstraction
 //polymorphism
 //inheritance
 
 	
}
