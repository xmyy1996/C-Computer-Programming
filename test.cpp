# include <stdio.h>

int max(int m, int n)
{
	if (m > n)
	{
		return m;
	}
	else
	{
		return n;
	}
	
}
int main(void)
{

	while (int s = 1 <= 2)
	{
		int i;
		int j;
		printf("请输入两个数字，空格隔开并回车：\n");
		scanf("%d %d", &i, &j);
		printf("较大的数字为：%d\n", max(i, j));
		s++;
	}
	return 0;
}