#include <iostream>
using namespace std;
int main(){
	int Circle,Rectangle,Square,Triangle;
	float radius,side,width,length,base,height;
	
	cout<<"---------------"<<endl;
	cout<<"Area of Shapes"<<endl;
	cout<<"---------------"<<endl;
	cout<<"Area of Circle"<<endl;
	cout<<"Input the Radius: ";
	cin>>radius;
	cout<<"Area of Square"<<endl;
	cout<<"Input the Side: ";
	cin>>side;
	cout<<"Area of Rectangle"<<endl;
	cout<<"Input the Width: ";
	cin>>width;
	cout<<"Input the Length: ";
	cin>>length;
	cout<<"Area of Triangle"<<endl;
	cout<<"Input the Base: ";
	cin>>base;
	cout<<"Input the Height: ";
	cin>>height;
	
	Circle=3.1416*radius*radius;
	Square=side*side;
	Rectangle=width*length;
	Triangle=0.5*base*height;
	
	cout<<"---------------"<<endl;
	cout<<"The Result is"<<endl;
	cout<<"---------------"<<endl;
	cout<<"Area of Circle: "<<Circle<<endl;
	cout<<"Area of Square: "<<Square<<endl;
	cout<<"Area of Rectangle: "<<Rectangle<<endl;
	cout<<"Area of Triangle: "<<Triangle<<endl;
}
