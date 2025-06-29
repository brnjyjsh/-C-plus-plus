// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
using namespace std;

int main()
{
	
	for(int x = 1; x <= 3; x++){
		for(int y = 1; y <= 3; y++){
		cout<<"*";
		}
		cout<<endl;
	}
		for(int x=1; x<=3; x++){
	cout<<x;
	}
	cout<<endl;
	for(int y = 1; y<=3; y++){
		cout<<y;
	}
	cout<<endl;
	for(int z = 1; z<=3; z++){
		cout<<z;
	}
	cout<<endl;
	for(int x=1; x<=1;x++){
		cout<<"*";
	}
	cout<<endl;
	for(int y=1; y <=2; y++){
		cout<<"*";
	}
	cout<<endl;
	for(int z=1; z<=3; z++){
		cout<<"*";
	}
	cout<<endl;
	for(int x=1; x<=1;x++){
		cout<<x;
	}
	cout<<endl;
	for(int y=1; y <=2; y++){
		cout<<y;
	}
	cout<<endl;
	for(int z=1; z<=3; z++){
		cout<<z;
	}
	cout<<endl;
	for(int x=1; x<=3; x++){
		cout<<"*";
	}
	cout<<endl;
	for(int y=1; y<=2; y++){
		cout<<"*";
	}
	cout<<endl;
	for(int z=1; z<=1; z++){
		cout<<"*";
	}
	cout<<endl;
	for(int x=1; x<=3; x++){
		cout<<x;
	}
	cout<<endl;
	for(int y=1; y<=2; y++){
		cout<<y;
	}
	cout<<endl;
	for(int z=1; z<=1; z++){
		cout<<z;
	}
	cout<<endl;
	for(int x=3; x>=1; x--)
	{
	for(int y=2; y>=x; y--)
	{
		cout<<" ";
	}
	for(int z=1; z<=x; z++)
	{
		cout<<"*";
	}
	cout<<endl;
	}
	for(int x=3; x>=1; x--)
	{
	for(int y=2; y>=x; y--)
	{
		cout<<" ";
	}
	for(int z=1; z<=x; z++)
	{
		cout<<z;
	}
	cout<<endl;
	}
	int rows;
	cout<<"Enter Rows of Number:";
	cin>>rows;
	for(int e= 1; e<=rows; e++)
	{
		for(int f=rows; f>=e; f--)
		{
			cout<<" ";
		}
	for(int g = 1; g<=e; g++)
	{
		cout<<"*"<<" ";
	}
	cout<<endl;
	}
	int row;
	cout<<"Enter Row of Number:";
	cin>>row;
	for(int e= 1; e<=row; e++)
	{
		for(int f=row; f>=e; f--)
		{
			cout<<" ";
		}
	for(int g = 1; g<=e; g++)
	{
		cout<<g<<" ";
	}
	cout<<endl;
	}
}
