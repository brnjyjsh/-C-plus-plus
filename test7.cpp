#include<iostream>
using namespace std;

int main()
{
	int a=3;
	
	for(int x=1; x<=a; x++ )
		{
		for( int y=1; y<=x; y++ )
		{ 
			cout<<"  ";
		}
		for( int z=3; z>=x; z-- )
		{ 
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;
}

