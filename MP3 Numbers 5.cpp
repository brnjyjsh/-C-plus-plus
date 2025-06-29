// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	
	for ( int x=1; x<=a; x++ )
	{
		for ( int y=a; y>=x; y-- )
		{
			cout << " ";
		}
		for ( int z=1; z<=x; z++ )
		{
			cout << z << "";
		}
		cout << endl;
	}
	return 0;
}	
