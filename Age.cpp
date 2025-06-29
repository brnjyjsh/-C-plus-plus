#include <iostream>
using namespace std;

int main()
{
	int age;
	
	cout << "Enter the Age: ";
	cin >>age;
	
	if ( age >= 0 && age <= 3)
		cout << "Infant" <<endl;
	else if ( age >= 4 && age <= 6)
		cout << "Pre-School" <<endl;
	else if ( age >= 7 && age <= 12)
		cout << "Elementary" <<endl;
	else if ( age >= 13 && age <= 18)
		cout << "High School" <<endl;
	else if ( age >= 19 && age <= 22)
		cout << "College" <<endl;
	else if ( age >= 23 && age <= 59)
		cout << "Working" <<endl;
	else if ( age >= 60)
		cout << "Senior Citizen" <<endl;
	else 
		cout << "Invalid";

	return(0);
}
