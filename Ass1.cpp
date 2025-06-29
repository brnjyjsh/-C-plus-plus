#include <iostream>
using namespace std;

int main ()
{
	int x,y;
	int sum;
	int diff;
	int div;
	int prod;
	
	cout<<("Enter the First Number: ");
	cin>>x;
	cout<<("Enter the Second Number: ");
	cin>>y;
	
	sum=x+y;
	diff=x-y;
	div=x/y;
	prod=x*y;
	
	cout<<"---------------"<<endl;
	cout<<"The Result is "<<endl;
	cout<<"---------------"<<endl;
	cout<<"Sum of "<<x<<" and "<<y<<" is "<<sum<<endl;
	cout<<"Difference of "<<x<<" and "<<y<<" is "<<diff<<endl;
	cout<<"Quotient of "<<x<<" and "<<y<<" is "<<div<<endl;
	cout<<"Product of "<<x<<" and "<<y<<" is "<<prod<<endl;
}

