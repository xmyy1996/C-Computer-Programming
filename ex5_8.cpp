# include<iostream.h>

void main()
{
	char x;		//����
	int i, j, m, n = 0;
	int a, b;
	cin>>i>>x;		//������ź͸���
	i = i - 1;		//ȥ��©���м�һ��
	for(j = 6; ; j = j + 4)		//ȷ�����м�һ����ÿ�з��Ÿ�����������С����
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
	j = j - 4;		//���ֵ����j
	b = j;		//��b�������ֵ���Ա��߱Ƚ�
	cout<<i<<endl;		//���ʣ��ķ���
	for(m = 1; m <= (j/2); m++)		//����ԳƵ��ϰ벿��
	{
		cout<<x;
		if(m == (j/2))
		{
			n = n + 1;		//�ո����
			cout<<endl;
			j = j - 4;
			m = 0;
			if(j <= 0)
			{
				break;
			}
			for(a = 1; a <= n; a++)		//���ƿո�
			{
				cout<<' ';
			}
		}
	}
	j = j + 8;		//��ԭj
	n = n - 1;			//�ո����	
	for(a = 2; a <= n; a++)		//Ԥ�ȿ�����һ�пո�
	{
		cout<<' ';
	}
	for(m = 1; m <= (j/2); m++)		//����ԳƵ��ϰ벿��
	{
		cout<<x;
		if(m == (j/2))
		{
			n = n - 1;		//�ո����
			cout<<endl;
			for(a = 2; a <= n; a++)
			{
				cout<<' ';
			}
			j = j + 4;
			m = 0;
		}
		if(j == (b+4))		//j�ﵽ���ֵ��ɳ���
		{
			break;
		}
	}
}