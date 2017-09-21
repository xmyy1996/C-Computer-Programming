# include <iostream.h>
# include <iomanip.h>

void main()
{
	int i, j;
	int a, b, c;
	cin>>i;
	a = i % 10;
	b = i / 10;
	c = b % 10;
	b = b / 10;
	j = a * 100 + b + c * 10;
	cout<<j<<endl;

}