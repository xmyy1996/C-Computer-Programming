# include <iostream.h>

void main()
{
	int i = 5;
	int a = i++;
	cout<<a<<endl;
	cout<<i<<endl;
	i = 5;
	a = ++i;
	cout<<a<<endl;
	cout<<i<<endl;

	i = 5;
	cout<<i<<endl<<i++<<endl;

}