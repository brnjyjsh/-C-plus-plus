// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream> 
using namespace std; 
  
int main() 
{ 
 	int x = 3; 
    int y = 2*x - 2; 
  
    for (int a=0; a<x; a++) 
    { 
  
        for (int b=0; b<y; b++) 
            cout <<" "; 
  
        y = y - 1; 
  
        for (int b=0; b<=a; b++ ) 
        { 
            cout << "* "; 
        } 
  
        cout << endl; 
    } 
	return 0;
}
