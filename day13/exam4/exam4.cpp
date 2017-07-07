// exam4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

int sum_int(void *pA, void *pB)
{
	int a = *(int *)pA;
	int b = *(int *)pB;

	printf("%d \n", a + b);
}

void sum_double(void *pA, void *pB)
{
	double a = *(double *)pA;
	double b = *(double *)pB;

	printf("%d \n", a + b);
}

int main()
{
	void(*fpSum)(void *, void *);

	int a = 3;
	int b = 4;
	fpSum = sum_int;
	fpSum(&a, &b);

	double c, d;
	c = 3.14;
	d = 9.8;

	fpSum = sum_double;
	fpSum(&a, &b);


    return 0;
}

