/////////
//��2��//
/////////
# include<iostream.h>
float f(int);
void main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	cout<<"S = "<<f(n);
}
float f(int n)
{
	int i, j = 0;
	float s = 0;
	for(i = 1; i <= n; i++)
	{
		j = j + i;
		s = s + (float)1 / j;
	}
	return s;
}
/*
���н����
Enter n:8
S = 1.77778Press any key to continue
*/
/////////
//�ϻ�9//
/////////
# include<iostream.h>
void fun(int);
void main()
{
	int m;
	cout<<"Enter m:";
	cin>>m;
	fun(m);
}
void fun(int m)
{
	int i, j = 0;
	for(i = 1; i <= m; i++)
	{
		if((i % 7 == 0) || (i % 11 == 0))
		{
			cout<<i<<' ';
			j = j + 1;	
		}
	}
	cout<<endl<<"�ܱ�7����11����������"<<j<<"��"<<endl;
}
/*
���н����
Enter m:78
7 11 14 21 22 28 33 35 42 44 49 55 56 63 66 70 77
�ܱ�7����11����������17��
Press any key to continue
*/
//////////
//�ϻ�10//
//////////
# include<iostream.h>
float fun(double);
void main()
{
	double h;
	cout<<"Enter h:";
	cin>>h;
	cout<<"h = "<<fun(h)<<endl;
}
float fun(double h)
{
	h = h * 1000;
	int i = h;
	if(i % 10 >= 5)
	{
		i = (i / 10) + 1;
	}
	else
	{
		i = i / 10;
	}
	h = double(i) / 100;
	return h;
}
/*
���н����
Enter h:8.32533
h = 8.33
Press any key to continue
*/