# include<iostream.h>

void main()
{
	int i, j;
	int m = 1, n = 2;
	float s = 0;
	for(i = 1; i <= 20; i++)
	{
		s = s + (float(m) / n);
		j = m;
		m = n;
		n = j + n;
	}
	cout<<"����1/2, 2/3, 3/5, 5/8, ��ǰ20��֮��Ϊ��"<<s<<endl;
}