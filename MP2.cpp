// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
using namespace std;

int main()
{
	int x=0,a=0;
	
	cout << "Enter the Number: ";
	cin >> x;
	x = x - 1;
	
	cout << "\n N ";
	cout << "\t 10*N ";
	cout << "\t 100*N ";
	cout << "\t 1000*N ";
	
	while ( a <= x )
	{
		a+=1;
		cout << "\n " << a;
		cout << "\t " << a * 10;
		cout << "\t " << a * 100;
		cout << "\t " << a * 1000;	
	}
	cout << endl;
	return 0;
}
