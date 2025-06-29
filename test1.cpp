#include <iostream>
using namespace std;

int main()
{
	int a,b,x;
	int rows;
	
	cout << "Enter rows of number: ";
	cin >> rows;
	
	
	for ( a=1; a<=rows; a++ )
		{
		for ( b=1; b<=a; b++ )
		{
			cout << "";
		}
		for ( x=1; x<=a; x++)
		{
			cout << x << "";
		}
			cout << endl;
		}
	return 0;
}
