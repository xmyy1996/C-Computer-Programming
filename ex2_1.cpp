# include <iostream.h>

void main()
{
	int a,b,c,d;
	cout<<"请输入a和b的值："<<endl;
	cin>>a>>b;
	a>=b?c=b:c=a;
	a>=b?d=a:d=b;
	cout<<"c="<<c<<endl<<"d="<<d<<endl;
}