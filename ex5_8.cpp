# include<iostream.h>

void main()
{
	char x;		//符号
	int i, j, m, n = 0;
	int a, b;
	cin>>i>>x;		//输入符号和个数
	i = i - 1;		//去除漏斗中间一个
	for(j = 6; ; j = j + 4)		//确定除中间一行外每行符号个数的两倍（小到大）
	{
		i = i - j;
		if(i <= 0)
		{
			i = i + j;
			break;
		}
		else
		{
			cout<<j<<' ';
		}
	}
	j = j - 4;		//最大值赋给j
	b = j;		//用b保存最大值，以便后边比较
	cout<<i<<endl;		//输出剩余的符号
	for(m = 1; m <= (j/2); m++)		//输出对称的上半部分
	{
		cout<<x;
		if(m == (j/2))
		{
			n = n + 1;		//空格计数
			cout<<endl;
			j = j - 4;
			m = 0;
			if(j <= 0)
			{
				break;
			}
			for(a = 1; a <= n; a++)		//控制空格
			{
				cout<<' ';
			}
		}
	}
	j = j + 8;		//还原j
	n = n - 1;			//空格计数	
	for(a = 2; a <= n; a++)		//预先控制下一行空格
	{
		cout<<' ';
	}
	for(m = 1; m <= (j/2); m++)		//输出对称的上半部分
	{
		cout<<x;
		if(m == (j/2))
		{
			n = n - 1;		//空格计数
			cout<<endl;
			for(a = 2; a <= n; a++)
			{
				cout<<' ';
			}
			j = j + 4;
			m = 0;
		}
		if(j == (b+4))		//j达到最大值完成程序
		{
			break;
		}
	}
}