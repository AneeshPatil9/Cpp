#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the value for num1,num2"<<endl;
	cin>>num1>>num2;
	cout<<"\nStart\n";
	try
	{
		cout<<"Inside try block\n";
		if(num2==0)
		{
			throw num2;
			cout<<"This will not execute";
		}
		else
		{
			float result=(float)num1/num2;
			cout<<"division of given number : "<<result<<endl;
		}
	}
	catch(int num2)
	{
		cout<<"Caught an exception trying to divide by zero:";
		cout<<num2<<"\n";
	}
	cout<<"End"<<endl<<endl;
}
