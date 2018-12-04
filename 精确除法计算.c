/*
**	???????????, ???????????????��??
**	?????????????, M / N(0 < M < N < 100)
*/

#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"

#define LEN 100

int main()
{
	int m = 0; 
	int n = 0;
	int i = 0;
	int j = 0;
	int beg = 0;
	int end = 0;
	/*---????????????��??????---*/
	int flag = 0;
	int quotient[LEN] = { 0 };
	int remainder[LEN] = { 0 };
	printf("??????????M??N: \n");
	scanf("%d %d", &m, &n);
	remainder[i] = m;
	quotient[i++] = m * 10 / n;
	while (i < LEN)
	{
		remainder[i] = remainder[i - 1] * 10 % n;
		/*---????---*/
		if (remainder[i] == 0)
		{
			beg = 0;
			end = i;
			flag = 1;
			break;
		}
		quotient[i] = remainder[i] * 10 / n;
		/*---?��????????????????---*/
		for (j = i - 1; j >= 0; --j)
		{
			if (remainder[j] == remainder[i])
			{
				beg = j;
				end = i;
				break;
			}
		}
		/*---??????????????---*/
		if (j >= 0)
		{
			break;
		}
		++i;
	}
	/*---??????---*/
	/*---????????��??---*/
	if (flag == 1)
	{
		printf("%d / %d ??????????��??, ????: 0.", m, n);
		for (i = beg; i < end; ++i)
		{
			printf("%d", quotient[i]);
		}
		printf("\n");
	}
	/*---???????????��??---*/
	else
	{
		printf("%d / %d ?????????????��??, ????: 0.", m, n);
		for (i = 0; i < end; ++i)
		{
			printf("%d", quotient[i]);
		}
		printf("\n");
		printf("???????????%d��?????, ??????: ", beg + 1);
		for (i = beg; i < end; ++i)
		{
			printf("%d", quotient[i]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}