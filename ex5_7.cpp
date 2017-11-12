# include<iostream.h>

void main()
{
	long i, j;
	int m, n = 0;
	float s = 1;
	cout<<"Enter i"<<endl;
	cin>>i;
	if(i < 0)
	{
		s = s * 1.5;
		i = -i;
	}
	j = i;
	for(m = 1; m <= 8; m++)
	{
		j = j / 10;
		if(j == 0)
		{
			break;
		}
	}
//	cout<<m<<endl;
	j = i;
	for(m = 1; m <= 8; m++)
	{
		if(j % 10 == 2)
		{
			n = n + 1;
		}
		j = j / 10;
		if(j == 0)
		{
			break;
		}
	}
//	cout<<n<<endl;
	if((i % 10) % 2 == 0)
	{
		s = s * 2;
	}
	cout<<float(n) / m * s * 100<<'%'<<endl;
}