# include <iostream.h>
# include <math.h>

void main()
{
	int a, b, c;
	float delta;
	float x1, x2;
	cout<<"�����һԪ���η���a, b, c��ֵ��";
	cin>>a>>b>>c;
	delta = b * b - 4 * a * c;
	if (a == 0 || delta <= 0)
	{
		cout<<"��������!"<<endl;
	}
	else
	{
		x1 = (- b) + sqrt(delta) / (2 * a);
		x2 = (- b) - sqrt(delta) / (2 * a);
		cout<<"x1 = "<<x1<<"x2 = "<<x2<<endl;
	}
}