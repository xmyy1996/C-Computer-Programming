# include <iostream.h>
int day(int);

void main()
{
	int y, m, d;
	int i, j, s;
	cout<<"请输入年月日："<<endl;
	cin>>y>>m>>d;
	s = d;
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		i = 29;
	}
	for(j = 1; j < m; j++)
	{
		s = s + day(j);
	}
	if(i == 29)
	{
		s = s + 1;
	}
	cout<<y<<"年"<<m<<"月"<<d<<"日"<<"是该年的第"<<s<<"天"<<endl;
}

int day(int i)
{
	if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
	{
		return 31;
	}
	else if(i == 2)
	{
		return 28;
	}
	else
	{
		return 30;
	}
}