// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include<iostream>
using namespace std;

int main()
{
	int a = 1;

	for( int x=3; x>=a; x-- )
		{
		for( int y=2; y>=x; y-- )
		{
			cout<<" ";
		}
		for( int z=a; z<=x; z++ )
		{
			cout << z;
		}
		cout<<endl;
	}
	return 0;
}

