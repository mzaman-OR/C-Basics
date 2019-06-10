/* Algorithm Add
Begin
	print 'Enter 2 no'
	Read a, b
	c <- a + b
	print 'addition is', c
end
*/

#include <iostream>

using namespace std;

int main()
{
	int a, b, c ;
	
	cout << " Enter 2 numbers";
	cin >> a >>b;
	
	c = a + b;
	
	cout << " The addition is " << c;
	 

	return 0;
}
