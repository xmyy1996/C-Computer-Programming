# include <iostream.h>

void main()
{
	int i = 5;
	int a = i++;
	cout<<a<<endl;		//输出结果为5
	cout<<i<<endl;		//输出结果为6
	i = 5;
	a = ++i;
	cout<<a<<endl;		//输出结果为6
	cout<<i<<endl;		//输出结果为6

	i = 5;
	cout<<i<<endl<<i++<<endl;		//输出结果分别为6和5

}
