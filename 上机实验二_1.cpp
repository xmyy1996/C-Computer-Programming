# include <iostream.h>

void main()
{
	int a,b,c,d;
	cin>>a>>b;
	a>=b?c=b:c=a;		//a,b中较小值赋给c
	a>=b?d=a:d=b;		//a,b中较大值赋给d
	cout<<"c="<<c<<endl<<"d="<<d<<endl;
}
