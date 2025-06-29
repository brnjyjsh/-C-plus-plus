// <<Brian Jay Joshua D. Broñosa - 201910202>>
// <<BSIT 1-1>>
// <<DCIT22 - Computer Programming 1>>
#include <iostream>
using namespace std;

int main()
{
    int a = 3;
    
    for( int x=a; x>=1; --x )
    	{
        for( int y=1; y<=x; ++y )
        {
            cout << " *";
        }
        cout << endl;
    	}
    
    return 0;
}
