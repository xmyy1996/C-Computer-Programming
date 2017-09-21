# include <iostream.h>
# include <math.h>

void main()
{
	int a, b, c;
	float area, s;
	cout<<"请输入三边的值a, b, c:";
	cin>>a>>b>>c;
	s = (a + b + c)/2;
	area = sqrt(s * (s - a)*(s - b)*(s - c));
	cout<<"三角形面积S="<<area<<endl;
}