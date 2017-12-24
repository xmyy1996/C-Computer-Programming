/////////
//第3题//
/////////
# include<iostream.h>
# define N 10
void process(int *);
void main()
{
	int a[N], i;
	for(i = 0; i < N; i++)
	{
		cin>>a[i];
	}
	process(a);
	for(i = 0; i < N; i++)
	{
		cout<<' '<<a[i]<<' ';
	}
	cout<<endl;
}
void process(int *p)
{
	int i, max, min, m, n;
	max = min = *p;
	m = n =0;
	for(i = 0; i < N; i++)
	{
		if(*(p + i) > max)
		{
			max = *(p + i);
			m = i;
		}
		if(*(p + i) < min)
		{
			min = *(p + i);
			n = i;
		}
	}
	*(p + m) = min;
	*(p + n) = max;
}
/*
运行结果：
1 2 3 4 5 6 7 8 9 10
 10  2  3  4  5  6  7  8  9  1
Press any key to continue
*/
/////////
//第4题//
/////////
# include<iostream.h>
# define N 10
void process(int *);
void main()
{
	int a[N], i;
	for(i = 0; i < N; i++)
	{
		cin>>a[i];
	}
	process(a);
	for(i = 0; i < N; i++)
	{
		cout<<' '<<a[i]<<' ';
	}
	cout<<endl;
}
void process(int *p)
{
	int i, j = N - 1, t;
	for(i = 0; i < N/2; i++)
	{
		if(j >= N/2)
		{
			t = *(p + i);
			*(p + i) = *(p + j);
			*(p + j) = t;
		}
		j--;
	}
}
/*
运行结果：
1 2 3 4 5 6 7 8 9 10
 10  9  8  7  6  5  4  3  2  1
Press any key to continue
*/
/////////
//第6题//
/////////
# include<iostream.h>
# include<string>
# define N 100
# define M 100
void process(char *, char *, char *, int);
void main()
{
	int a;
	char s1[N], s2[M], s[M+N];
	gets(s1);
	gets(s2);
	cin>>a;
	process(s1, s2, s, a);
	cout<<s<<endl;
}
void process(char *s1, char *s2, char *s, int a)
{
	int i, j = 0, m = a;
	for(i = 0; *(s1+m-1) != '\0'; i++)
	{
		if(i > a-1)
		{
			if(*(s2+j) != '\0')
			{
				for(j = 0; *(s2+j) != '\0'; j++)
				{
					*(s+i) = *(s2+j);
					i++;
				}
				i--;
			}
			else
			{
				*(s+i) = *(s1+m);
				m++;
			}
		}
		else
		{
			*(s+i) = *(s1+i);
		}
	}
	*(s+i) = *(s1+m);
}
/*
运行结果：
12345678
abcdefgh
5
12345abcdefgh678
Press any key to continue
*/
