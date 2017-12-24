/////////
//第3题//
/////////
# include<iostream.h>
# include<iomanip.h>
# include<string>
# define N 4
int sum(int *);
void process(int *);
void main()
{
	int a[N][N], i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"输入的数组为:"<<endl;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			cout<<a[i][j]<<setw(5);
		}
		cout<<'\n';
	}
	cout<<"主对角线之和为:"<<sum(&a[0][0])<<endl;
	process(&a[0][0]);
	cout<<"处理后的数组:"<<endl;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			cout<<a[i][j]<<setw(5);
		}
		cout<<'\n';
	}
}
int sum(int *p)
{
	int s = 0;
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(i == j)
			{
				s = s + *(p + i*N + j);
			}
		}
	}
	return s;
}
void process(int *p)
{
	int i, j;
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(i > j)
			{
				*(p + i*N + j) = *(p + i*N + j) + 1;
			}
			if(i < j)
			{
				*(p + i*N + j) = *(p + i*N + j) - 1;
			}
		}
	}
}
/*
运行结果：
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
输入的数组为:
1    2    3    4
5    6    7    8
9   10   11   12
13   14   15   16
主对角线之和为:34
处理后的数组:
1    1    2    3
6    6    6    7
10   11   11   11
14   15   16   16
Press any key to continue
*/
/////////
//第4题//
/////////
# include<iostream.h>
# include<iomanip.h>
# define N 20
void main()
{
	int i;
	int f[N];
	f[0] = f[1] = 1;
	for(i = 2; i < N; i++)
	{
		f[i] = f[i-1] + f[i-2];
	}
	for(i = 0; i < N; i++)
	{
		if(i % 5 == 0)
		{
			cout<<'\n';
		}
		cout<<setw(5)<<f[i];

	}
	cout<<'\n';
}
/*
运行结果：
    1    1    2    3    5
    8   13   21   34   55
   89  144  233  377  610
  987 1597 2584 4181 6765
Press any key to continue
*/
