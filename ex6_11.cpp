# include<iostream.h>
void f1(int);
void f2(int);
void f3(int);
int a[10];
float s = 0;
void main()
{
	int n;
	cout<<"请输入课程数:";
	cin>>n;
	f1(n);
	f2(n);
	f3(n);
}
void f1(int n)
{
	int i;
	for(i = 0; i <= (n - 1); i++)
	{
		cout<<"请输入第"<<i + 1<<"门课程成绩:";
		cin>>a[i];
	}
}
void f2(int n)
{
	int i;
	for(i = 0; i <= (n - 1); i++)
	{
		s = s + a[i];
	}
}
void f3(int n)
{
	cout<<"平均成绩为:"<<float(s)/n<<endl;
}