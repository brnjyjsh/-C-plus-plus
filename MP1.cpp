// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
using namespace std;

int main(){
	int accnum;
		double bbal,tcharges,tcredits,climit;
			double x,y;
	
	while ( accnum!=-1 )
	{
		cout << " Enter account number: ";
		cin >> accnum;

		if ( accnum == -1 )
		{
			break;
		}
		cout << " Enter Beginning Balance: ";
		cin >> bbal;
		cout << " Enter Total Charges: ";
		cin >> tcharges;
		cout << " Enter Total Credits: ";
		cin >> tcredits;
		cout << " Enter Credit Limit: ";
		cin >> climit;
		
	x = bbal - tcredits;
	y = x + tcharges;
	
		cout << " ======================= " << endl;
		cout << " New Balance: " << y << endl;
		cout << " ======================= " << endl;
		
		if ( y > climit )
		{
			cout << " ======================= " << endl;
			cout << " Account Number: " << accnum << endl;
			cout << " Credit Limit: " << climit << endl;
			cout << " Balance: " << y << endl;
			cout << " Credit Limit Exceeded." << endl;
			cout << " ======================= " << endl;
		}
	}
	return 0;
}
