#include<iostream>
using namespace std;

int main()
{
    int num;
    
    cout <<"Enter an integer: ";
    cin >> num;
    
    if ( num % 2 == 0)
        cout << num << " is even.";
    else
        cout << num << " is odd.";
  
    return 0;
}
