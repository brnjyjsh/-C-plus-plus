#include <iostream>
using namespace std;

int main()
{
	int yrlvl;
	cout << "Enter the Year level: ";
	cin >>yrlvl;
	
	if ( yrlvl == 1)
	{
		cout << "Year level: Freshies";
	}
	else if ( yrlvl == 2)
	{	
		cout << "Year level: Sophomore";
	}
	else if ( yrlvl == 3)
	{
		cout << "Year level: Junior";
	}
	else if ( yrlvl == 4)
	{
		cout << "Year level: Senior";
	}
	else
	{
		cout << "Invalid Year Level";
	}
	
	return(0);
}
