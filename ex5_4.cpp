# include<iostream.h>
# include<math.h>

void main()
{
	int i = 1;
	double s = 0;
	for(; i <= 100; i++)
	{
		s = s + pow(i, 2);
	}
	cout<<"1^2 + 2^2 + 3^2 +бн+ 100^2 = "<<s<<endl;
	s = 1;
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;
	for(i = 1; i <= n; i++)
	{
		s = s * i;
	}
	cout<<n<<"! = "<<s<<endl;
}