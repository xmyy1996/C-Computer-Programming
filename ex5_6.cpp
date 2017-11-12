# include<iostream.h>

void main()
{
	int i, j, k;
	for(i = 5; i <= 100; i = i + 5)
	{
		for(j = 5; j <=50; j = j + 5)
		{
			for(k = 5; k <= 20; k = k + 5)
			{
				if(i + 2 * j + 5 * k == 100)
				{
					cout<<i<<' '<<j<<' '<<k<<endl;
				}
			}
		}
	}
}