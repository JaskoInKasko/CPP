#include "Fixed.hpp"

int	main()
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	cout << a.getRawBits() << endl;
	a.setRawBits(2);
	cout << a.getRawBits() << endl;
	cout << b.getRawBits() << endl;
	cout << c.getRawBits() << endl;
	return 0;
}