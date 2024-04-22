#include <iostream>
using namespace std;

class Number
{
	public:
		void func(int x)
		{
			cout<<"value of x is: "<<x<<endl;
		}
		void func(double x)
		{
			cout<<"value of x is: "<<x<<endl;
		}
		void func(int x,int y)
		{
			cout<<"value of x and y is: "<<x<<"."<<y<<endl;
		}
};

int main()
{
	Number obj1;
	
	obj1.func(938);
	obj1.func(4598.4784);
	obj1.func(637,26);
	return 0;
}
