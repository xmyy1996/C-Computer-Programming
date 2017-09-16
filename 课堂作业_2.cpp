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
