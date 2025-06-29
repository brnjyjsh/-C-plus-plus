#include <iostream>
#include <string>
using namespace std;

int main()
{
		float bagweight;
		float charge;
		float plus;
		float last1;
		float last2;
	
	
	cout << " Welcome to our Airline, Please kindly enter the amount weight of your baggage. ";
	cout << " \nInsert the amount weight of your baggage here: ";
	cin >> bagweight;
	
		charge = 5.00;
		plus = bagweight - 50;
		last1 = 0.95 * plus;
		last2 = last1 + charge;
	
	if ( bagweight <= 50 )
	{
		cout << " \n No Charge.";
	}
	else if ( bagweight > 50 )
	{
		cout << " \n Your charge: $" << charge << " \n Additional $0.95 for each pound over 50 lbs: " << last1 << " \n Total charge: $" << last2;
	}
	else 
	{
		cout << " Invalid input, please try again.";
	}
	
	return(0);
}
