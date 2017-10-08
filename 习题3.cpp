/////////
//第1题//
/////////
# include <iostream.h>

void main()
{
	int i, j, m;
	j = 0;
	cout<<"请输入一个整数："<<endl;
	cin>>i;
	if (i <= 0)
	{
		j = 1;
	}
	else
	{
		for (m = i; m > 0;)
		{
			m = m / 10;
			j++;
		}
	}

	switch(j)
	{	
	case 1: cout<<i<<"小于10"<<endl;
			break;
	case 2: cout<<i<<"介于10-99之间"<<endl;
			break;
	case 3: cout<<i<<"介于100-999之间"<<endl;
			break;
	default: cout<<i<<"大于1000"<<endl;
	}
}		//switch实现

# include <iostream.h>

void main()
{
	int i;
	cout<<"请输入一个整数："<<endl;
	cin>>i;

	if (i < 10)
	{
		cout<<i<<"小于10"<<endl;
	}
	else if (i >= 10 && i <= 99)
	{
		cout<<i<<"介于10-99之间"<<endl;
	}
	else if (i >= 100 && i <= 999)
	{
		cout<<i<<"介于100-999之间"<<endl;
	}
	else
	{
		cout<<i<<"大于1000"<<endl;
	}
}		//if实现
//运行结果：
//请输入一个整数：
//236
//236介于100-999之间
//Press any key to continue

/////////
//第3题//
/////////
# include <iostream.h>

void main()
{
	int i, j;
	cout<<"请输入一个整数：";
	cin>>i;
	j = i % 7;
	if (j == 0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
//运行结果：
//请输入一个整数：14
//YES
//Press any key to continue

/////////
//第5题//
/////////
# include <iostream.h>
# include <math.h>

void main()
{
	float a, b, c;
	float area, s;
	cout<<"请输入三边的值a, b, c:";
	cin>>a>>b>>c;
	s = (a + b + c)/2;
	area = sqrt(s * (s - a)*(s - b)*(s - c));
	cout<<"三角形面积S="<<area<<endl;
}
//运行结果：
//请输入三边的值a, b, c:2.5 3.6 4.7
//三角形面积S=4.44203
//Press any key to continue

/////////
//第6题//
/////////
# include <iostream.h>

void main()
{
	float r, pi, area, c;
	int k;
	pi = 3.1415926;
	cout<<"计算圆的面积请输入1"<<endl<<"计算圆的周长请输入2"<<endl<<"计算圆的面积和周长请输入3"<<endl;
	cin>>k;
	cout<<"请输入圆的半径："<<endl;
	cin>>r;
	area = r * r * pi;
	c = 2 * r * pi;
	switch (k)
	{
		case 1: cout<<"圆的面积S = "<<area<<endl;
			break;
		case 2: cout<<"圆的周长C = "<<c<<endl;
			break;
		default: cout<<"圆的面积S = "<<area<<"圆的周长C = "<<c<<endl;
	}
}
//运行结果：
//计算圆的面积请输入1
//计算圆的周长请输入2
//计算圆的面积和周长请输入3
//3
//请输入圆的半径：
//6
//圆的面积S = 113.097圆的周长C = 37.6991
//Press any key to continue

/////////
//第8题//
/////////
# include <iostream.h>

void main()
{
	int a, b, m, n;
	cout<<"请输入整数a, b:"<<endl;
	cin>>a>>b;
	m = a / b;
	n = a % b;

	if (n ==0)
	{
		cout<<a<<'/'<<b<<'='<<m<<endl;
	}
	else
	{
		cout<<a<<'/'<<b<<'='<<m<<"…"<<n<<endl;
	}
}
//运行结果：
//请输入整数a, b:
//148 3
//148/3=49…1
//Press any key to continue
