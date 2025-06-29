#include <iostream>
using namespace std;

int main()
{
	int a,x,sum;
	
	sum=0;
	
	for ( x=1;x<=5;x++ )
	{
		cout << " Number " << x << ":";
		cin >> a;
		
		sum+=a;
	}
	cout << " sum: " << sum;
	
	return 0;
}
